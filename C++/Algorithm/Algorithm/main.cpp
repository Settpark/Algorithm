//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "BackTracking/BOJ9663.hpp"

int arr[500007];
int n, m;

int lower_idx(int target, int len) {
    int st = 0;
    int en = len;
    while (st<en) {
        int mid = (st+en)/2;
        if (arr[mid] >= target) mid = en;
        else st = mid+1;
    }
    return en;
}

int upper_idx(int target, int len) {
    int st = 0;
    int en = len;
    while(st<en) {
        int mid = (st+en)/2;
        if (arr[mid] > target) mid = en;
        else st = mid+1;
    }
    return en;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cin >> m;
    for (int j = 0; j < m; j++) {
        cout << upper_idx(m, n) - lower_idx(m, n) << ' ';
    }
}
