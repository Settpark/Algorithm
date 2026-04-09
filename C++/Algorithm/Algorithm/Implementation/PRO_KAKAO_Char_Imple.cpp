//
//  PRO_KAKAO_Char_Imple.cpp
//  Algorithm
//
//  Created by 박정하 on 2022/01/05.
//

#include "PRO_KAKAO_Char_Imple.hpp"

int PRO_KAKAO_Char_Imple::solution(string str1, string str2) {
    int answer = 0;
    map<string, int> m1;
    map<string, int> m2;
    vector<string> total_str;
    
    for (int i = 0; i< str1.size()-1; i++) {
        char first = str1[i];
        char second = str1[i+1];
        if ((int)first >= 65 && (int)second <= 122 && (int)second >= 65 && (int)second<=122 && (int)first != 95 && (int)second != 95) {
            if ((int)first > 96)
                first = (int)first - 32;
            if ((int)second > 96)
                second = (int)second - 32;
            string temp = "";
            temp += first;
            temp += second;
            if (m1[temp] == 0) total_str.push_back(temp);
            m1[temp]++;
        }
    }
    for (int i = 0; i <str2.size()-1; i++) {
        char first = str2[i];
        char second = str2[i+1];
        if ((int)first >= 65 && (int)first <= 122 && (int)second >= 65 && (int)second<=122 && (int)first != 95 && (int)second != 95) {
            if ((int)first > 96)
                first = (int)first - 32;
            if ((int)second > 96)
                second = (int)second - 32;
            string temp = "";
            temp += first;
            temp += second;
            if (m2[temp] == 0) total_str.push_back(temp);
            m2[temp]++;
        }
    }
    
    for(auto e: total_str) {
        cout << e << ' ';
    }
    
    if (total_str.size() == 0) return 0;
    
    double mn = 0, mx = 0;
    
    for (int i = 0; i<total_str.size(); i++) {
        string target = total_str[i];
        mn += min(m1[target], m2[target]);
        mx += max(m1[target], m2[target]);
    }
    
    answer = mn / mx * 65536;
    
    return answer;
}
