//
//  DHK.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/03.
//

#include "resolvedArray.hpp"

int resolvedArray::soluiton(string S) {
    int ans = 0; int temp = 0;
    for (auto e: S) {
        if (e == 'B') temp++;
        else if (e == 'A') {ans += temp; temp = 0;}
    }
    return ans;
}
