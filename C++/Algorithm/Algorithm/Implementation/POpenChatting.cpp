//
//  POpenChatting.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/19.
//

#include "POpenChatting.hpp"

vector<string> split(string target, char standard) {
    vector<string> s = {};
    string temp = "";
    for (auto e: target) {
        if (e != standard) {
            temp.push_back(e);
        }
        else if (e == standard){
            s.push_back(temp);
            temp = "";
        }
    }
    s.push_back(temp);
    for (auto e: s) {
        cout << e << endl;
    }
    return s;
}

vector<string> POpenChatting::solution(vector<string> record) {
    vector<string> answer;
    vector<string> state;
    unordered_map<string, string> m;
    
    for (int i = 0; i<record.size(); i++) {
        string str[3];
        string token;
        stringstream ss(record[i]);
        int index = 0;
        
        while(ss >> token)
            str[index++] = token;
        
        if (str[0] == "Enter") {
            state.push_back("님이 들어왔습니다.");
            answer.push_back(str[1]);
            m[str[1]] = str[2];
        }
        else if (str[0] == "Leave") {
            state.push_back("님이 나갔습니다.");
            answer.push_back(str[1]);
        }
        else m[str[1]] = str[2];
    }
    
    for (int i = 0; i< answer.size(); i++) {
        answer[i] = m[answer[i]] + state[i];
    }
    
    return answer;
}
