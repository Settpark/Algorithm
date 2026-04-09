//
//  BOJ1620.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/27.
//

#include "BOJ1620.hpp"

void BOJ1620::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_map<string, int> p;
    string i2s[100007];
    
    int n, m; cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> i2s[i];
        p[i2s[i]] = i;
    }
    
    for (int i = 0 ; i < m; i++) {
        string q;
        cin >> q;
        if (isdigit(q[0])) {
            int k = stoi(q);
            cout << i2s[k] << '\n';
        } else {
            cout << p[q] << '\n';
        }
    }
}
