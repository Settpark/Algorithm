//
//  BOJ9663.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/09.
//

#include "BOJ9663.hpp"

void BOJ9663::func1(int cur) {
    if (cur == N) { // i == 횡이고 cur은 종으로 이해하면 쉬우려나,,, Queen N개를 놓는 데 성공했다!
        ans++;
        return;
    }
    
    for (int i = 0; i<N; i++) {
        if (isused[i] || isused2[cur + i] || isused3[cur - i + N - 1]) continue;
        isused[i] = 1;
        isused2[cur + i] = 1;
        isused3[cur - i + N - 1] = 1;
        func1(cur + 1);
        isused[i] = 0;
        isused2[cur + i] = 0;
        isused3[cur - i + N - 1] = 0;
    }
}
