//
//  BOJ1874.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/01.
//

#include "BOJ1874.hpp"

void BOJ1874::solution() {
    int n; cin >> n;
    queue<int> q; stack<int> st;
    vector<char> v;
    for (int i = 0; i<n; i++) {
        int k; cin >> k;
        q.push(k);
    }
    bool valid = true;
    int idx = 0;
    while(!st.empty() || !q.empty()) {
        if (idx > n) {valid = false; break;}
        if (!st.empty() && q.front() == st.top()) {
            q.pop(); st.pop(); v.push_back('-');
        } else {
            st.push(++idx); v.push_back('+');
        }
    }
    if (!valid) cout << "NO";
    else for(auto e: v) cout << e << '\n';
}
