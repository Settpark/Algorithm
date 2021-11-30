//
//  BOJ11286.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/29.
//

#include "BOJ11286.hpp"

void BOJ11286::solution() {
    int n; cin >> n;
    priority_queue<int, vector<int>, cmp> pq;
    while(n--) {
        int m; cin >> m;
        if(m == 0) {
            if(pq.empty()) {
                cout << 0 << '\n';
                continue;
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(m);
        }
    }
}

bool cmp::operator()(int a, int b) { 
    if (abs(a) != abs(b)) return abs(a) > abs(b);
    return a > 0 && b < 0;
}
