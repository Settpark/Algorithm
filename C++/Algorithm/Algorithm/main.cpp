//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "BackTracking/BOJ15650.hpp"

int main(void) {
    BOJ15650 b = BOJ15650();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> b.n >> b.m;
    b.tracking(0, 1);
}
