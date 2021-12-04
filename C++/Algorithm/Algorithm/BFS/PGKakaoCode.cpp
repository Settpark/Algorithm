//
//  PGKakaoCode.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/04.
//

#include "PGKakaoCode.hpp"

vector<int> solutionColoringBook(int m, int n, vector<vector<int>> picture) {
    int visited[107][107] = {};
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    queue<pair<int,int>> q;
    
    int area = 0; int maxArea = 0;
    for(int i = 0; i<m; i++) {
        for(int j =0; j<n; j++) {
            if (picture[i][j] == 0 || visited[i][j] == 1) continue;
            area++;
            q.push({i, j});
            visited[i][j] = 1;
            int tempArea = 0;
            while(!q.empty()) {
                auto cur = q.front(); q.pop(); tempArea++;
                int curvalue = picture[cur.first][cur.second];
                for (int k = 0; k<4; k++) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx >= m || ny >= n || nx < 0 || ny < 0) continue;
                    if (picture[nx][ny] == 0 || visited[nx][ny] == 1 || picture[nx][ny] != curvalue) continue;
                    q.push({nx, ny});
                    visited[nx][ny] = 1;
                }
            }
            maxArea = max(tempArea, maxArea);
        }
    }
    vector<int> ans = {area, maxArea};
    return ans;
}
