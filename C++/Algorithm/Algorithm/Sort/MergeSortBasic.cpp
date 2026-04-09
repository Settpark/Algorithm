//
//  MergeSortBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/24.
//

#include "MergeSortBasic.hpp"

void MergeBasic::merge_Sort(int st, int en) {
    if (st+1 == en) return;
    int mid = (st+en)/2;
    merge_Sort(st, mid);
    merge_Sort(mid, en);
    merge(st, en);
}

void MergeBasic::merge(int st, int en) {
    int mid = (st+en)/2;
    int lidx = st;
    int ridx = mid;
    for (int i = st; i < en; i++) {
        if(ridx == en) tmp[i] = arr[lidx++];
        else if(lidx == mid) tmp[i] = arr[ridx++];
        else if(arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
        else tmp[i] = arr[ridx++];
    }
    for(int i = st; i < en; i++) arr[i] = tmp[i];
}
