//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "BackTracking/BOJ9663.hpp"

int main(int argc, const char * argv[]) {
    BOJ9663 b = BOJ9663();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> b.N;
    b.func1(0);
    cout << b.ans << '\n';
}

