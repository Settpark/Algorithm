//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "Stack/BOJ2493.hpp"

int main(int argc, const char * argv[]) {
    queue<int> q;
    int n; cin >> n;
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        if (cnt%2 == 0) {
            q.pop(); cnt++;
        } else if ( cnt%2 != 0) {
            int k = q.front(); q.pop();
            q.push(k); cnt++;
        }
    }
    cout << q.front() << '\n';
}

