//
//  BOJ1926.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/26.
//

#include "BOJ1926.hpp"

void BOJ1926::solution() {
    int board[502][502];
    int vis[502][502];
    
    int width, height;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> width >> height;
    
    int num = 0, mx = 0;
    
    for (int i = 0; i < width; i++)
        for (int j = 0; j < height; j++)
            cin >> board[i][j];
    
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (vis[i][j] || board[i][j] == 0) continue;
            num++;
            queue<pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({i,j});
            int area = 0;
            while(!Q.empty()) {
                area++;
                pair<int, int> cur = Q.front(); Q.pop();
                
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    
                    if (nx > width || nx < 0 || ny > height || ny < 0) continue;
                    if (vis[nx][ny] || board[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << '\n' << mx ;
}
