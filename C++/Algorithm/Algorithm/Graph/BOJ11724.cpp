//
//  BOJ11724.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/05.
//

#include "BOJ11724.hpp"

void BOJ11724::solution() {
    vector<int> list[1007];
    bool vis[1007];
    queue<int> q;
    int v, e;
    cin >> v >> e;
    for (int i = 0; i<e; i++) {
        int k, l;
        cin >> k >> l;
        list[k].push_back(l);
        list[l].push_back(k);
    }
    int area = 0;
    for (int i = 1; i<= v; i++) {
        if (vis[i] == 1) continue;
        q.push(i);
        vis[i] = 1;
        area++;
        while(!q.empty()) {
            int cur = q.front(); q.pop();
            for (auto e: list[cur]) {
                if(vis[e] == true) continue;
                q.push(e);
                vis[e] = true;
            }
        }
    }
    cout << area;
}
