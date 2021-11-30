//
//  BOJ1715.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/29.
//

#include "BOJ1715.hpp"

void BOJ1715::soluiton() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin >> n;
    int sum = 0;
    while(n--) {
        int m; cin >> m;
        pq.push(m);
    }
    while(pq.size() > 1) {
        int f = pq.top(); pq.pop();
        int s = pq.top(); pq.pop();
        sum += f + s;
        pq.push(sum);
    }
    cout << sum;
}
