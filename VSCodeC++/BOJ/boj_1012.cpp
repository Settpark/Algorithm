#include <bits/stdc++.h>
using namespace std;

int arr[51][51];
bool isvisited[51][51];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int T, N, M, K;

void dfs(int u, int v) {
    // cout << "u=" << u << "v=" << v << endl;
    isvisited[u][v] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = u + dy[i];
        int nx = v + dx[i];

        if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
        if (arr[ny][nx] != 1 || isvisited[ny][nx]) continue;
        dfs(ny, nx);
    }
    return;
}

int main() {
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N >> M >> K;

        memset(arr, 0, sizeof(arr));
        memset(isvisited, 0, sizeof(isvisited));

        for (int j = 0; j < K; j++) {
            int y, x;
            cin >> y >> x;
            arr[y][x] = 1;
        }

        int result = 0;

        for (int u = 0; u < N; u++) {
            for (int v = 0; v < M; v++) {
                if (arr[u][v] == 1 && !isvisited[u][v]) {
                    dfs(u, v);
                    result++;
                }
            }
        }
        cout << result << endl;
    }
}