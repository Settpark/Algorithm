//
//  BOJ17219.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/29.
//

#include "BOJ17219.hpp"

void BOJ17219::solution() {
    int n, m; cin >> n >> m;
    unordered_map<string, string> p;
    while(n--) {
        string s1, s2;
        cin >> s1 >> s2;
        p[s1] = s2;
    }
    while(m--) {
        string ans; cin >> ans;
        cout << p[ans] << '\n';
    }
}
