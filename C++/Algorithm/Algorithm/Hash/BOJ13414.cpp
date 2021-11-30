//
//  BOJ13414.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/29.
//

#include "BOJ13414.hpp"

void BOJ13414::solution() {
    unordered_map<string, int> h;
    vector<pair<int, string>> v;
    int n, m; cin >> n >> m;
    int idx = 0;
    while (m--) {
        string k; cin >> k;
        h[k] = ++idx;
    }
    for(auto i = h.begin(); i!=h.end(); i++) {
        string a = i->first;
        int b = i->second;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < min((int)v.size(), n); i++) {
        cout << v[i].second << '\n';
    }
}
