//
//  BOJ11659.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/22.
//

#include "BOJ11659.hpp"

int d[100007];
int a[100007];

void BOJ11659::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    d[0] = 0;
    for (int i = 1; i<= n; i++) {
        cin >> a[i];
        d[i] = d[i-1] + a[i];
    }
    
    while(m--) {
        int f,s;
        cin >> f >> s;
        cout << d[s] - d[f-1] << '\n';
    }
    
}
