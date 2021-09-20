//
//  BOJ10808.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/20.
//

#include <iostream>
#include <string>
#include "BOJ10808.hpp"

using namespace std;

void BOJ10808::solution10808() {
    int freq[26] = {};
    string s;
    cin >> s;
    for (auto c: s)
        freq[c - 'a']++;
    for (int i = 0; i < 26; i++) {
        cout << freq[i] << ' ';
    }
//    for (char a = 'a'; a <= 'z'; a++) {
//        int cnt = 0;
//        for (auto c : s)
//            if (a == c) cnt++;
//        cout << cnt << ' ';
//    }
}
