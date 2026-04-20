#include <bits/stdc++.h>
using namespace std;

int N, M;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int m[101][101];
bool isvisited[101][101];

void dfs(int n, int m) {
    isvisited[n][m] = 1;
    for (int i = 0; i<4; i++) {
        int ny = n + dy[i];
        int nx = m + dx[i];
        if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
            continue;
        }
        dfs(ny, nx);
    }
    return;
}

int main() {
    cin.tie();

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> m[i][j];
        }
    }

    int result = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (isvisited[i][j] != 1 && m[i][j] == 1) {
                dfs(i, j);
                result++;
            }
        }
    }

    cout << result;
}