//
//  DFSBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/28.
//

#include "DFSBasic.hpp"

void DFSBasic::solution() {
    
    int board[502][502];
    int vis[502][502];
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    int m = 7, n = 10;
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int, int>> St;
    vis[0][0] = 1;
    St.push({0,0});
    
    while(!St.empty()) {
        auto cur = St.top(); St.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if (vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            St.push({nx,ny});
        }
    }
}
