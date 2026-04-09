//
//  프_신규아이디추천.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/12.
//

#include "PNewID.hpp"

string PNewID::solution(string new_id) {
    string answer = new_id;
    char store = ' ';
    
    for (int i = 0; i < answer.length(); i++) {
        if (answer[i] >= 'A' && answer[i] <= 'Z') { answer[i] += 32; }
    }
    
    for (int i = 0; i < answer.length(); i++) {
        if (answer[i] != '-' && answer[i] != '_' && answer[i] != '.') {
            if (!(answer[i] >= '0' && answer[i] <= '9')) {
                if (!(answer[i] >= 'a' && answer[i] <= 'z')) {
                    answer.erase(i, 1);
                    i--;
                }
            }
        }
    }
    
    for (int i = 0; i < answer.length(); i++) {
        if (answer[i] == '.') {
            if (answer[i] == store) {
                answer.erase(i, 1);
                i--;
            }
            else store = answer[i];
        }
        else if (answer[i] != '.') {
            store = ' ';
        }
    }
    
    while (answer.front() == '.') {
        answer.erase(0, 1);
    }
    
    while (answer.back() == '.') {
        answer.erase(answer.end()-1);
    }
    
    
    
    if (answer.length() > 15) {
        while (answer.length() > 15) {
            answer.pop_back();
        }
        if (answer.back() == '.') {
            answer.pop_back();
        }
    }
    if (answer.length() < 3) {
        auto last = answer.back();
        while (answer.length() < 3) {
            answer.push_back(last);
        }
    }
    return answer;
}
