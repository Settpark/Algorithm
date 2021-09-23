//
//  BOJ10828.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/23.
//

#include "BOJ10828.hpp"

void BOJ10828::solution() {
    int count = 0;
    cin >> count;
    
    stack<int> St;
    
    while (count--) {
        string s;
        cin >> s;
        
        if (s == "push") {
            int temp;
            cin >> temp;
            St.push(temp);
        }
        else if (s == "pop") {
            if (!St.empty()){
                cout << St.top() << '\n';
                St.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (s == "size") {
            cout << St.size() << '\n';
        }
        else if (s == "empty") {
            if (St.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else //top
        {
            if(!St.empty())
                cout << St.top() << '\n';
            else {
                cout << -1 << '\n';
            }
        }
    }
}
