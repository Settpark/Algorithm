//
//  BOJ11729.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/30.
//

#include "BOJ11729.hpp"

void BOJ11729::hanoi(int a, int b, int n) {
    if (n == 1) {  // base condition;
        cout << a << ' ' << b << '\n';
        return;
    }
    hanoi(a, 6-a-b, n-1); // n-1개를 빈곳으로 옮긴다.
    cout << a << ' ' << b << '\n';
    hanoi(6-a-b, b, n-1); // 빈 곳에서 목적지로 n-1개를 옮긴다.
}

void BOJ11729::solution() {
    int c;
    cin >> c;
    //원판 K개의 이동을 위해 N번의 이동이 필요했음. 그럼 원판 K+1개를 옮길 때는 K개의 원판을 빈곳으로 옮길 때 N번
    //K+1번째 원판을 옮길 때 한번 K개의 원판을 빈곳에서 목적지로 이동할 때 N번 따라서 2N+1
    //초항이 1이기 때문에 일반항은 2^k-1이지요!
    cout << (1<<c) - 1 << '\n'; //left shift 연산자
    hanoi(1, 3, c);
}
