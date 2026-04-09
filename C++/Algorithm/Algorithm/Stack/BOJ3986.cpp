//
//  BOJ3986.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/24.
//

#include "BOJ3986.hpp"

void BOJ3986::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int result = 0;
    int n; cin >> n;
    for (int i = 0; i<n; i++) {
        string k; cin >> k;
        stack<int> st;
        for (auto e: k) {
            if (st.empty()) st.push(e);
            else if (!st.empty()) {
                if (e == 'A') {
                    if (st.top() == 'A') st.pop();
                    else st.push(e);
                } else if (e == 'B') {
                    if (st.top() == 'B') st.pop();
                    else st.push(e);
                }
            }
        }
        if (st.empty()) result++;
    }
    cout << result;
}
