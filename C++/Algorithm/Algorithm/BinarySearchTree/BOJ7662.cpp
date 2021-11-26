//
//  BOJ7662.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/27.
//

#include "BOJ7662.hpp"

void BOJ7662::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while (n--) {
        int m; cin >> m;
        multiset<int> s;
        while(m--) {
            char a;
            cin >> a;
            if (a == 'D') {
                int b; cin >> b;
                if (s.empty()) continue;
                if (b == 1) {
                    s.erase(prev(s.end()));
                } else {
                    s.erase(s.begin());
                }
            } else {
                int c; cin >> c;
                s.insert(c);
            }
        }
        if (s.empty()) cout << "EMPTY\n";
        else {
            cout << *prev(s.end()) << ' ' << *s.begin() << '\n';
        }
    }
}
