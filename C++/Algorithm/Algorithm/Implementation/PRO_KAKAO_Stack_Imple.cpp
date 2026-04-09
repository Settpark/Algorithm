//
//  PRO_KAKAO_Stack_Imple.cpp
//  Algorithm
//
//  Created by 박정하 on 2022/01/03.
//

#include "PRO_KAKAO_Stack_Imple.hpp"

bool PRO_KAKAO_Stack_Imple::isBalance(string a) {
    int lf = 0, rf = 0;
    for (auto e: a) {
        if (e == '(') lf++;
        if (e == ')') rf++;
    }
    return lf == rf;
}

bool PRO_KAKAO_Stack_Imple::isCorrect(string a) {
    stack<char> st;
    for (auto e: a) {
        if (st.empty()) st.push(e);
        else {
            if (e == '(') st.push(e);
            else if (e == ')') {
                if (st.top() == '(')
                    st.pop();
                else {
                    st.push(e);
                }
            }
        }
    }
    if (st.empty()) return true;
    else return false;
}

string PRO_KAKAO_Stack_Imple::splitString(int index, string s) {
    string result = "";
    for (int i = index; i<s.size(); i++) {
        result+= s[i];
    }
    return result;
}

pair<string, string> PRO_KAKAO_Stack_Imple::makeBalance(string a) {
    string temp = "";
    int index = 0;
    for(int i = 0; i<a.size(); i++) {
        temp.push_back(a[i]);
        if (isBalance(temp)) {
            index = i+1;
            break;
        }
    }
    string temp2 = splitString(index, a);
    return {temp, temp2};
}

string PRO_KAKAO_Stack_Imple::myreverse(string s) {
    string result = "";
    stack<char> c;
    for(int i = 1; i<s.size()-1; i++) {
        if (s[i] == '(') result += ')';
        else result += '(';
    }
    return result;
}

string PRO_KAKAO_Stack_Imple::recur(string s) {
    if (s.empty()) return "";
    string temp = "";
    pair<string, string> s1 = makeBalance(s);
    if (isCorrect(s1.first)) {
        return s1.first += recur(s1.second);
    }
    else {
        temp.push_back('(');
        temp += recur(s1.second);
        temp.push_back(')');
        return temp += myreverse(s1.first);
    }
}

string PRO_KAKAO_Stack_Imple::solution(string p) {
    string answer = "";
    if (isBalance(p)) {
        if (isCorrect(p))
            answer = p;
        else {
            answer = recur(p);
        }
    }
    return answer;
}
