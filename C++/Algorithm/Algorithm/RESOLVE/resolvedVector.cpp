//
//  DHK2.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/03.
//

#include "resolvedVector.hpp"

int resolvedVector::solution(vector<int> &A) {
    int ans = 0;
    vector<bool> isturnon(A.size());
    for (auto i = 0; i<A.size(); i++) {
        if (A[i] == 1) {
            isturnon[0] = 1;
            ans++;
            continue;
        } else {
            if (!isturnon[0]) {
                isturnon[A[i]-1] = 1;
                continue;
            } else if (isturnon[0] && isturnon[A[i]-2]){
                isturnon[A[i]-1] = 1;
                ans++;
            }
        }
    }
    return ans;
}
