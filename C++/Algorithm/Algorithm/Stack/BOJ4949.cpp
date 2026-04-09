//
//  BOJ4949.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/25.
//

#include "BOJ4949.hpp"

void BOJ4949::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while (1) {
        string input;
        getline(cin, input);
        if (input == ".") break;
        stack<char> st;
        
        bool isVaild = true;
        for (auto c: input) {
            if (c=='(' || c == '[') {
                st.push(c);
            }
            else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    isVaild = false;
                    break;
                }
                st.pop();
            }
            else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    isVaild = false;
                    break;
                }
                st.pop();
            }
        }
        if (isVaild == false || !st.empty()){
            cout << "no" << '\n';
        }
        else {
            cout << "yes" << '\n';
        }
    }
}
