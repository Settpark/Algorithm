//
//  BOJ1431.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/26.
//

#include "BOJ1431.hpp"

bool BOJ1431::cmp(const string &a, const string &b) {
    if (a.size() != b.size()) return a.size() < b.size();
    int sumA = 0; int sumB = 0;
    for (auto e: a) if (e - '0' < 10) { sumA += e - '0'; }
    for (auto e: b) if (e - '0' < 10) { sumB += e - '0'; }
    if (sumA != sumB) return sumA < sumB;
    int lidx = 0; int ridx = 0;
    while(true) {
        if (a[lidx] - '0' != b[ridx] - '0') {
            return a[lidx] - '0' < b[ridx] - '0';
        } else {
            lidx++; ridx++;
        }
    }
}

void BOJ1431::solution() {
    string arr[57];
    int n; cin >> n;
    for (int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n, cmp);
    for (int j = 0; j<n; j++) cout << arr[j] << '\n';
}
