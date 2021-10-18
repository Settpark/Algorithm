//
//  BOJ2231.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/18.
//

#include "BOJ2231.hpp"

int length_digit(int n) {
    int cnt = 0;
    while (n) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

void BOJ2231::solution() {
    int an;
    cin >> an;
    
    for (int i = 0; i<an; i++) {
        int a = i, b = i;
        while(b) {
            a += b % 10;
            b /= 10;
        }
        if (a == an) {cout << i; break;}
        if (i == an - 1) cout << 0;
    }
}
