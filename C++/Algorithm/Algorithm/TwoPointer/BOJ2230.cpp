//
//  BOJ2230.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/06.
//

#include "BOJ2230.hpp"

void BOJ2230::soluiton() {
    int arr[100007];
    int n, m;
    cin >> n >> m;
    int st = 0, en = 0;
    int mn = INT_MAX;
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    while(st < n) {
        if (arr[en] - arr[st] < m) {
            if (en == n) break;
            en++;
        }
        else if (arr[en] - arr[st] >= m) {
            mn = min(mn, arr[en] - arr[st]);
            st++;
        }
    }
    cout << mn;
}
