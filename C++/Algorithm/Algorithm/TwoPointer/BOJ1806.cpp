//
//  BOJ1806.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/06.
//

#include "BOJ1806.hpp"

void BOJ1806::solution() {
    int arr[100007] = {};
    int n, m;
    cin >> n >> m;
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    int st = 0, en = 0; int sum = arr[en];
    int mn = INT_MAX;
    while (st<n) {
        while (en < n && sum < m) {
            sum += arr[++en];
        }
        if (en == n) break;
        if (sum >= m) {
            mn = min((en-st)+1, mn);
            sum -= arr[st];
            st++;
        }
    }
    if (mn == INT_MAX) mn = 0;
    cout << mn;
}
