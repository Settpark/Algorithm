//
//  PRO_KAKAO_BFS_001.cpp
//  Algorithm
//
//  Created by 박정하 on 2022/01/04.
//

#include "PRO_KAKAO_BFS_001.hpp"

vector<int> PRO_KAKAO_BFS_001::solution(vector<vector<string>> places) {
    vector<int> answer;
    bool vistied[5][5][5] = {};
    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};
    queue<pair<int, int>> q;
    for (int i = 0; i<places.size(); i++) {
        bool isValid = true;
        for (int j = 0; j<places[i].size(); j++) {
            if (!isValid) break;
            for (int k = 0; k<places[i][j].size(); k++) {
                if (places[i][j][k] == 'P' && !vistied[i][j][k]) {
                    q.push({j, k});
                    vistied[i][j][k] = 1;
                    while(!q.empty()) {
                        auto cur = q.front(); q.pop();
                        for (int l = 0; l<4; l++) {
                            int nx = cur.first + dx[l];
                            int ny = cur.second + dy[l];
                            if (nx < 0 || nx >= places[i].size() || ny < 0 || ny >= places[i][j].size()) continue;
                            if (vistied[i][nx][ny] || places[i][nx][ny] == 'X' || abs(nx-j) + abs(ny-k) > 2) continue;
                            vistied[i][nx][ny] = 1;
                            q.push({nx, ny});
                            if (places[i][nx][ny] == 'P') {
                                isValid = false;
                                while(!q.empty()) q.pop();
                            }
                        }
                    }
                }
            }
        }
        if (isValid) answer.push_back(1);
        else answer.push_back(0);
    }
    return answer;
}
