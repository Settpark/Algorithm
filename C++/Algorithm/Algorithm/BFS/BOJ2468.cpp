//
//  BOJ2468.cpp
//  Algorithm
//
//  Created by 박정하 on 2022/06/01.
//

#include "BOJ2468.hpp"

void BOJ2468::solution() {
    int n; cin >> n;
    
    int mx = 0;
    
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cin >> arr[i][j];
            if (mx < arr[i][j]) mx = arr[i][j];
        }
    }
    
    queue<pair<int, int>> q;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    int mx_result = 0;
    for (int k = 0; k < mx; k++) {
        int temp = 0;
        int isvisited[107][107] = {};
        for (int i = 0; i<n; i++) {
            for (int j = 0; j<n; j++) {
                if(arr[i][j] > k) {
                    if(isvisited[i][j]) continue;
                    q.push({i,j});
                    isvisited[i][j] = true;
                    temp++;
                    while(!q.empty()) {
                        auto cur = q.front(); q.pop();
                        for (int l = 0; l<4; l++) {
                            int nx = cur.first + dx[l];
                            int ny = cur.second + dy[l];
                            
                            if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
                            if (isvisited[nx][ny] == 1 || arr[nx][ny] <= k) continue;
                            q.push({nx,ny});
                            isvisited[nx][ny] = 1;
                        }
                    }
                }
            }
        }
        mx_result = max(mx_result, temp);
    }
    
    cout << mx_result;
}
