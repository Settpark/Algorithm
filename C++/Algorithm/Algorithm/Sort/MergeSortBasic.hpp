//
//  MergeSortBasic.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/24.
//

#ifndef MergeSortBasic_hpp
#define MergeSortBasic_hpp

#include <bits/stdc++.h>

using namespace std;

class MergeBasic {
public:
    int arr[1000007] = {10, 0, -9, 7};
    int tmp[1000007];
    int n = 4;
    void merge(int st, int en);
    void merge_Sort(int st, int en);
};

#endif /* MergeSortBasic_hpp */
