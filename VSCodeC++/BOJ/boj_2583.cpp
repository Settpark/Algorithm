#include <bits/stdc++.h>
using namespace std;

int M, N, K;
int arr[101][101];
bool isvisited[101][101];
queue<pair<int, int>> q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin >> M >> N >> K;

    for (int i = 0; i < K; i++) {
        int fx, fy, sx, sy;
        cin >> fx >> fy >> sx >> sy;

        for (int u = fy; u < sy; u++) {
            for (int v = fx; v < sx; v++) {
                arr[u][v] = 1;
            }
        }
    }

    int area = 0;
    vector<int> answers;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] != 1 && !isvisited[i][j]) {
                q.push({i, j});
                isvisited[i][j] = 1;                
                int partArea = 0;
                while (!q.empty()) {
                    auto front = q.front();
                    q.pop();
                    partArea++;
                    for (int l = 0; l < 4; l++) {
                        int ny = front.first + dy[l];
                        int nx = front.second + dx[l];

                        if (ny < 0 || nx < 0 || ny >= M || nx >= N) continue;
                        if (isvisited[ny][nx] == 1 || arr[ny][nx] == 1) continue;
                        q.push({ny, nx});
                        isvisited[ny][nx] = 1;
                    }
                }
                answers.push_back(partArea);
                area++;
            }
        }
    }

    cout << area << '\n';
    sort(answers.begin(), answers.end());
    for (auto e: answers) {
        cout << e << ' ';
    }
}