//
//  BOJ11728.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/24.
//

#include "BOJ11728.hpp"

void BOJ11728::solution() {
    int arr1[1000005] = {};
    int arr2[1000005] = {};
    int result[2000005] = {};
    int n, m;
    cin >> n >> m;

    for (int i = 0; i<n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i<m; i++) {
        cin >> arr2[i];
    }
    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i<n+m; i++) {
        if (arr1[index1] < arr2[index2]) { result[i] = arr1[index1++]; }
        else if (arr1[index1] > arr2[index2]) {result[i] = arr2[index2++];}
    }
    for (int i = 0; i<n+m; i++) {
        cout << result[i] << ' ';
    }
}
