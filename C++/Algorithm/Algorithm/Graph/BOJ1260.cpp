//
//  BOJ1260.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/06.
//

#include "BOJ1260.hpp"

void BOJ1260::solution() {
    cin >> v >> e >> s;
    for (int i = 0; i<e; i++) {
        int k, l; cin >> k >> l;
        templist[k].push_back(l);
        templist[l].push_back(k);
    }
    for (int i = 1; i<=v;i ++)
        sort(templist[i].begin(), templist[i].end()); // 정점이 작은 순으로 정렬한다.
    dfs(s);
    cout << '\n';
    bfs();
}

void BOJ1260::bfs() {
    Q.push(s);
    visbfs[s] = 1;
    while(!Q.empty()) {
        int cur = Q.front(); Q.pop();
        cout << cur << ' ';
        for (auto nxt: templist[cur]) {
            if (visbfs[nxt] == 1) continue;
            Q.push(nxt);
            visbfs[nxt] = 1;
        }
    }
}

void BOJ1260::dfs(int cur) {
    visdfs[cur] = 1;
    cout << cur << ' ';
    for (auto e: templist[cur]) {
        if(visdfs[e]) continue;
        dfs(e);
    }
}
