//
//  BOJ11726.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/21.
//

#include "BOJ11726.hpp"

void BOJ11726::solution() {
    int d[1007] = {};
    
    int n;
    cin >> n;
    
    d[1] = 1;
    d[2] = 2;
    
    for (int i = 3; i<=n; i++) {
        d[i] = (d[i-1] + d[i-2]) % 10007;
    }
    
    cout << d[n];
}
