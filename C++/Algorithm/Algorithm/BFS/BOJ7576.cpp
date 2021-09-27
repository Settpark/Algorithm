//
//  BOJ7576.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/27.
//

#include "BOJ7576.hpp"

void BOJ7576::solution() {
    int board[502][502];
    int vis[502][502];
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    int n, m;
    cin >> m >> n;
    queue<pair<int, int>> Q;
    
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1)
                Q.push({i,j});
            if (board[i][j] == 0)
                vis[i][j] = -1;
        }
    }
    while(!Q.empty()) {
        pair<int,int> cur = Q.front(); Q.pop();
        
        for(int i = 0; i<4; i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (vis[nx][ny] >= 0) continue;
            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            Q.push({nx,ny});
        }
    }
    
    int ans = 0;
    for (int i = 0; i<n; i++) {
        for (int j =0; j<m; j++) {
            if (vis[i][j] == -1) {
                cout << -1;
                return;
            }
            ans = max(vis[i][j], ans);
        }
    }
    cout << ans;
}
