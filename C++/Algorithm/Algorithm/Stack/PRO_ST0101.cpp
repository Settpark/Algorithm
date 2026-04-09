//
//  PRO_ST0101.cpp
//  Algorithm
//
//  Created by 박정하 on 2022/01/02.
//

#include "PRO_ST0101.hpp"

int PRO_ST0101::solution(string s) {
    int answer = -1;
    stack<char> st;
    for (auto e: s) {
        if (st.empty())
            st.push(e);
        else if (!st.empty()) {
            if (st.top() == e)
                st.pop();
            else if (st.top() != e)
                st.push(e);
        }
    }
    if (st.empty()) answer = 1;
    else answer = 0;
    return answer;
}
