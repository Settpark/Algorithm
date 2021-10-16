//
//  MenuRenewal.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/14.
//

#ifndef MenuRenewal_hpp
#define MenuRenewal_hpp

#include <bits/stdc++.h>

using namespace std;

class MenuRenewal {
public:
    map<string, int> m[100] = {};
    int maxindex[100] = {};
    vector<string> solution(vector<string> orders, vector<int> course);
    void swapmine(char &a, char &b);
    void permutation(string s, int depth, string s2);
};

#endif /* MenuRenewal_hpp */
