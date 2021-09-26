//
//  BFSBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/26.
//

#include "BFSBasic.hpp"

#define X first
#define Y second

void BFSBasic::implementBFS() {
    int board[502][502] = {};
    bool vis[502][502];
    int n = 7, m = 10;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    queue<pair<int, int>> Q;
    
    vis[0][0] = 1;
    Q.push({0,0});
    
    while(!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        
        for(int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //열의 범위를 넘어가는 경우에는 시행하지 않는다.
            if(vis[nx][ny] || board[nx][ny] != 1) continue; //이미 방문했거나 1이 아닌 경우에도 Q에 푸쉬 하지 않는다.
            vis[nx][ny] = 1; //board[nx][ny] 값이 1인 경우 방문했다는 표시 후에
            Q.push({nx,ny}); //큐에 값을 추가한다 (다음 순회를 위한)
        }
    }
}
