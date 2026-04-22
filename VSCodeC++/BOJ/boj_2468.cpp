#include <bits/stdc++.h>
using namespace std;

int N;
int arr[101][101];
bool isvisited[101][101];
int maximum;
int answer = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
            maximum = max(arr[i][j], maximum);
        }
    }

    for (int i = 0; i <= maximum; i++) {
        memset(isvisited, 0, sizeof(isvisited));

        int testCaseAnswer = 0;
        for (int u = 0; u < N; u++) {
            for (int v = 0; v < N; v++) {
                if (arr[u][v] > i && isvisited[u][v] != 1) {
                    q.push({u, v});
                    isvisited[u][v] = 1;
                    while (!q.empty()) {
                        auto front = q.front();
                        q.pop();
                        for (int l = 0; l < 4; l++) {
                            int ny = front.first + dy[l];
                            int nx = front.second + dx[l];

                            if (ny < 0 || nx < 0 || ny >= N || nx >= N)
                                continue;
                            if (isvisited[ny][nx] == 1 || arr[ny][nx] <= i)
                                continue;
                            q.push({ny, nx});
                            isvisited[ny][nx] = true;
                        }
                    }
                    testCaseAnswer++;
                }
            }
        }
        answer = max(testCaseAnswer, answer);
    }
    cout << answer;
}