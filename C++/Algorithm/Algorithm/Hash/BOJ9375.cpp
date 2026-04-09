//
//  BOJ9375.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/29.
//

#include "BOJ9375.hpp"

void BOJ9375::solution() {
    int n; cin >> n;
    while(n--) {
        int m; cin >> m;
        unordered_map<string, int> h;
        while(m--) {
            string s1, s2; cin >> s1 >> s2;
            if (h.find(s2) == h.end()) {
                h.insert({s2,1});
            } else {
                h[s2]++;
            }
        }
        int ans = 1;
        for(auto i = h.begin(); i != h.end(); i++) {
            ans *= i->second+1;
        }
        ans -= 1;
        cout << ans << '\n';
    }
}
