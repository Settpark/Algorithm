//
//  QueueBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/24.
//

#include "QueueBasic.hpp"

void QueueBasic::solution() {
    int MX = 1000005;
    int data[MX];
    
    int head = 0, tail = 0;
    
    int n;
    cin >> n;
    
    while (n--) {
        string command;
        cin >> command;
        if (command == "push") {
            int temp;
            cin >> temp;
            data[tail++] = temp;
        }
        
        else if (command == "pop") {
            if (tail - head != 0) {
                cout << data[head] << '\n';
                head++;
            }
            else
                cout << -1 << '\n';
        }
        
        else if (command == "size") {
            cout << tail - head << '\n';
        }
        
        else if (command == "empty") {
            if (tail - head == 0)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        
        else if (command == "front") {
            if (tail - head != 0) cout << data[head] << '\n';
            else cout << -1 << '\n';
            
        }
        else if (command == "back") {
            if (tail - head != 0) cout << data[tail-1] << '\n';
            else cout << -1 << '\n';
        }
    }
}
