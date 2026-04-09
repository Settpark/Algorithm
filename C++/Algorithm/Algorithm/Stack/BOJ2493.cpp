//
//  BOJ2493.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/01.
//

#include "BOJ2493.hpp"

void BOJ2493::soluiton() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<pair<int, int>> st;
    int n; cin >> n;
    st.push({100000001,0});
    for (int i = 1; i <= n; i++) {
        int h; cin >> h;
        while(st.top().first < h)
            st.pop();
        cout << st.top().second << ' ';
        st.push({h,i});
    }
}
