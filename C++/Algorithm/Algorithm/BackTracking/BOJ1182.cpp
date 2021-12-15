//
//  BOJ1182.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/11.
//

#include "BOJ1182.hpp"

void BOJ1182::solution() {
    ios::sync_with_stdio(0);
    cin >> n >> s;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    if(s==0) ans--;
    func1(0, 0);
    cout << ans;
}

void BOJ1182::func1(int cur, int tot) {
    if (cur == n) {
        if (tot == s)
            ans++;
        return;
    }
    func1(cur, tot);
    func1(cur, tot + arr[cur]);
}
