//
//  BOJ13300.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/11.
//

#include "BOJ13300.hpp"

void BOJ13300::solution() {
    int stu0[7] = {};
    int stu1[7] = {};
    int room[7] = {};
    int n, m;
    int s, y;
    int result = 0;
    
    cin >> n >> m;
    
    while (n--) {
        cin >> s >> y;
        if (s == 0) {
            if (stu0[y] == 0) {room[y]++; stu0[y]++;}
            else if (++stu0[y] >= m) stu0[y] = 0;
        }
        else {
            if (stu1[y] == 0) {room[y]++; stu1[y]++;}
            else if (++stu1[y] >= m) stu1[y] = 0;
        }
    }
    for (auto e: room) {
        result += e;
    }
    
    cout << result;
}

void BOJ13300::solution2() {
    double stu0[7] = {};
    double stu1[7] = {};
    int n, m;
    int s, y;
    int result = 0;
    
    cin >> n >> m;
    
    while (n--) {
        cin >> s >> y;
        if (s == 0) stu0[y]++;
        else stu1[y]++;
    }
    
    for (auto e: stu0) {
        int re = ceil(e/m);
        result += re;
    }
    for (auto e: stu1) {
        int re = ceil(e/m);
        result += re;
    }
    
    cout << result;
}
