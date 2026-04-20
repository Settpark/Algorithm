#include <bits/stdc++.h>
using namespace std;

int N, M;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int arr[101][101];
int isvisited[101][101];

queue<pair<int, int>> q;

int main() {
    cin >> N >> M;

    int startX, startY;
    cin >> startY >> startX;

    int destX, destY;
    cin >> destY >> destX;

    for (int y = 0; y < N; y++) {
        for (int x = 0; x < M; x++) {
            cin >> arr[y][x];
        }
    }
    q.push({startY, startX});
    isvisited[startY][startX] = 1;

    while (!q.empty()) {
        auto front = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = front.first + dy[i];
            int nx = front.second + dx[i];

            if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
            if (isvisited[ny][nx] || arr[ny][nx] == 0) continue;
            q.push({ny, nx});
            isvisited[ny][nx] = isvisited[front.first][front.second] + 1;
        }
    }
    cout << isvisited[destY][destX] << endl;
}
//     }
// }

// 5 5
// 0 0
// 4 4
// 1 0 1 0 1
// 1 1 1 0 1
// 0 0 1 1 1
// 0 0 1 1 1
// 0 0 1 1 1