#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[101][101];
int isvisited[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
queue<pair<int, int>> q;

int main() {
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        string k;
        cin >> k;
        for (int j = 0; j < k.size(); j++) {
            int a = k[j] - '0';
            arr[i][j + 1] = a;
        }
    }

    q.push({1, 1});
    isvisited[1][1] = 1;

    while (!q.empty()) {
        auto front = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = front.first + dy[i];
            int nx = front.second + dx[i];

            if (ny < 0 || nx < 0 || ny > N || nx > M) continue;
            if (isvisited[ny][nx] || arr[ny][nx] != 1) continue;
            q.push({ny, nx});
            isvisited[ny][nx] = isvisited[front.first][front.second] + 1;
        }
    }
    
    cout << isvisited[N][M] << endl;
}