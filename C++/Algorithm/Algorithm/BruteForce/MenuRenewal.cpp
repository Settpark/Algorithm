//
//  MenuRenewal.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/14.
//

#include "MenuRenewal.hpp"

void MenuRenewal::permutation(string s1, int depth, string s2) {
    if (depth >= s1.length()) {
        int leng = s2.length();
        if (leng >= 2) {
            m[leng][s2]++;
            maxindex[leng] = max(maxindex[leng], m[leng][s2]);
        }
        return;
    }
    permutation(s1, depth+1, s2 + s1[depth]);
    permutation(s1, depth+1, s2);
    
}

vector<string> MenuRenewal::solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    for (auto e: orders) {
        sort(e.begin(), e.end());
        permutation(e, 0, "");
    }
    
    for (auto e: course) {
        for (auto item: m[e]) {
            if (item.second >= 2 && item.second == maxindex[e]) {answer.push_back(item.first);}
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
