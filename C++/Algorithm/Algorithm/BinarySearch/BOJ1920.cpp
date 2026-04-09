//
//  BOJ1920.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/10.
//

#include "BOJ1920.hpp"

int BOJ1920::solution(int target) {
    int st = 0, en = n-1;
    int mid = st+en/2;
    while(st>=en) {
        if (target > mid) {
            st = mid + 1;
        } else if (target < mid) {
            en = mid - 1;
        } else
            return 1;
    }
    return 0;
}
