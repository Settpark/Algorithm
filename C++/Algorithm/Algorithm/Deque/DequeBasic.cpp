//
//  DequeBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/24.
//

#include "DequeBasic.hpp"

void DequeBasic::solution() {
    int mx = 1000005;
    int head = mx, tail = mx;
    int arr[mx*2];
    
    int n = 0;
    cin >> n;
    
    while(n--) {
        string s;
        cin >> s;
        if (s == "push_front") {
            int x;
            cin >> x;
            head--;
            arr[head] = x;
        }
        else if (s == "push_back") {
            int x;
            cin >> x;
            arr[tail] = x;
            tail++;
        }
        else if (s == "pop_front") {
            if (tail - head == 0)
                cout << -1 << '\n';
            else {
                cout << arr[head] << '\n';
                head++;
            }
        }
        else if (s == "pop_back") {
            if (tail - head == 0)
                cout << -1 << '\n';
            else {
                cout << arr[tail-1] << '\n';
                tail--;
            }
        }
        else if (s == "size") {
            cout << tail - head << '\n';
        }
        else if (s == "empty") {
            if (head - tail == 0)
                cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (s == "front") {
            if (head - tail == 0)
                cout << -1 << '\n';
            else cout << arr[head] << '\n';
        }
        else if (s == "back") {
            if (head - tail == 0)
                cout << -1 << '\n';
            else cout << arr[tail-1] << '\n';
        }
    }
}
