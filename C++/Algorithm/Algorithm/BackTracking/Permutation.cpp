//
//  Permutation.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/15.
//

#include "Permutation.hpp"

void Permutation::swap(char &a, char &b) {
    int temp;
    temp = b;
    b = a;
    a = temp;
}

void Permutation::solution(string s, int depth, int n, int r) {
    if (depth == r) {
        for (auto e: s) {
            cout << e << ' ';
        }
        cout << '\n';
    }
    
    for (int i = depth; i < n; i++) {
        swap(s[i], s[depth]);
        solution(s, depth + 1, n, r);
        swap(s[depth], s[i]);
    }
}
