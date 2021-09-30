//
//  BOJ1629.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/29.
//

#include "BOJ1629.hpp"

ll BOJ1629::POW(ll a, ll b, ll m) {
    if (b == 1) return a % m; //base condition 1승을 계산할 수 있고
    ll val = POW(a, b/2, m); //b/2승을 계산 할 수 있으면 귀납법에 의해 b승도 계산할 수 있다?
    val = val * val % m;
    if (b%2 == 0) return val;
    return val * a % m; //왜 홀수는 한번 더 할까? ex) 11번을 반으로 나누면 5.5 = 5로 연산 되기에 한번이 깎여 나감.
}

void BOJ1629::solution() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << POW(a, b, c);
}
