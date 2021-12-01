//
//  BOJ10773.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/01.
//

#include "BOJ10773.hpp"

void BOJ10773::solution() {
    int n; cin >> n;
    stack<int> st; int ans = 0;
    while (n--) {
        int m; cin >> m;
        if (m == 0) {
            if (st.empty()) continue;
            else st.pop();
        } else {
            st.push(m);
        }
    }
    while(st.size() != 0) {
        ans += st.top();
        st.pop();
    }
    cout << ans;
}
