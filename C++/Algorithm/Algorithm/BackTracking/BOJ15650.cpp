//
//  BOJ15650.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/15.
//

#include "BOJ15650.hpp"

void BOJ15650::tracking(int cur, int value) {
    if (cur == m) {
        for (int i = 0; i<m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for (int i = value; i<=n; i++) {
        if (!isused[cur]) {
            arr[cur] = i;
            isused[cur] = 1;
            tracking(cur+1, i+1);
            isused[cur] = 0;
        }
    }
}
