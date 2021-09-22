//
//  BOJ1406.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/22.
//

#include "BOJ1406.hpp"

void BOJ1406::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    list<char> LS;
    for(auto e: s)
        LS.push_back(e);
    
    auto t = LS.end();
    int count = 0;
    cin >> count;
    
    while (count--) {
        char c;
        cin >> c;
        if (c == 'L') {
            if (t != LS.begin()) {
                t--;
            }
        }
        else if (c == 'P') {
            char a;
            cin >> a;
            LS.insert(t, a);
        }
        else if (c == 'B') {
            if (t != LS.begin()) {
                t--;
                t = LS.erase(t);
            }
        }
        else {
            if (t != LS.end())
                t++;
        }
    }
    for (auto e: LS)
        cout << e;
}
