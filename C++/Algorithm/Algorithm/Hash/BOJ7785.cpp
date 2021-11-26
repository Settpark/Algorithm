//
//  BOJ7785.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/26.
//

#include "BOJ7785.hpp"

void BOJ7785::solution() { //이분 탐색이나 투 포인터로 풀어보기
    unordered_set<string> s;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin>>n;
    for(int i = 0; i<n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        
        if (s2 == "enter") {
            s.insert(s1);
        } else {
            s.erase(s1);
        }
    }
    vector<string> v(s.begin(), s.end());
    sort(v.begin(), v.end(), greater<string>());
    for (auto e: v) {cout << e << '\n';}
}
