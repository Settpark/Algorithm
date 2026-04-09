//
//  BOJ1931.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/23.
//

#include "BOJ1931.hpp"

void BOJ1931::solution() {
    int n; cin >> n;
    pair<int, int> r[100007];
    
    for (int i = 0; i<n; i++) {
        cin >> r[i].second >> r[i].first; // 1 4 second가 시작 시간 first가 끝나는 시간.
    }
    sort(r,r+n);
    
    int count = 0;
    int t = 0;
    
    for (int i = 0; i<n; i++) {
        if (r[i].second < t) continue; // 이 구문을 통해 중간의 t 이전의 스킵된 회의들이 싹 걸러짐.
        count++;
        t = r[i].first;
    }
    
    cout << count;
}
