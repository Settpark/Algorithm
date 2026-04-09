//
//  BOJ16165.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/30.
//

#include "BOJ16165.hpp"

void BOJ16165::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    map<string, unordered_set<string>> g;
    while(n--) {
        string gn; cin >> gn;
        int k; cin >> k;
        for(int i = 0; i<k; i++) {
            string mn; cin >> mn;
            g[gn].insert(mn);
        }
    }
    
    while(m--) {
        string k; int l;
        cin >> k >> l;
        if(l==0) {
            if (g.find(k) != g.end()) {
                vector<string> v = vector<string>(g[k].begin(), g[k].end());
                sort(v.begin(), v.end());
                for (auto e: v) {
                    cout << e << '\n';
                }
            }
        } else if (l==1) {
            for(auto e: g) {
                if(e.second.find(k) != e.second.end()) {
                    cout << e.first << '\n';
                }
            }
        }
    }
    
}
