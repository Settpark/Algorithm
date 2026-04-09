//
//  Permutation.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/15.
//

#ifndef Permutation_hpp
#define Permutation_hpp

#include <bits/stdc++.h>

using namespace std;

class Permutation {
public:
    void swap(char &a, char &b);
    void solution(string s, int depth, int n, int r);
};

#endif /* Permutation_hpp */
