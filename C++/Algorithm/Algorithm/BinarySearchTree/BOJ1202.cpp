//
//  BOJ1202.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/27.
//

#include "BOJ1202.hpp"

void BOJ1202::solution() { //나중에 다시 풀어보기..
    int n; int k;
    cin >> n >> k;
    map<int, int> j;
    int b[100000007];
    while(n--) {
        int m, v;
        cin >> m >> v;
        j[m] = v;
    }
    for (int i = 0; i<k; i++) cin >> b[i];
    sort(b, b+k);
}
