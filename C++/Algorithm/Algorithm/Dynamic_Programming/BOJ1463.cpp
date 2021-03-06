//
//  BOJ1463.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/20.
//

#include "BOJ1463.hpp"

void BOJ1463::solution() {
    int D[1000005];
    D[1] = 0;
    int n;
    cin >> n;
    
    for (int i = 2; i<=n; i++) {
        D[i] = D[i-1] + 1;
        if (i%2 == 0) {D[i] = min(D[i], D[i/2] + 1);}
        if (i%3 == 0) {D[i] = min(D[i], D[i/3] + 1);}
    }
    
    cout << D[n] << "\n";
}
