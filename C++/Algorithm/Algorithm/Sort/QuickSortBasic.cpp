//
//  QuickSortBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/24.
//

#include "QuickSortBasic.hpp"

void QuickSortBasic::quickSort(int st, int en) {
    if (en <= st + 1) return; //현재 보는 구간의 길이가 1이하인가?
    int pivot = arr[st];
    int l = st+1;
    int r = en-1;
    while(true) {
        while(l <= r && arr[l] <= pivot) l++;
        while(l <= r && arr[r] >= pivot) r--;
        if (l > r) break;
        swap(arr[l], arr[r]);
    }
    swap(arr[st], arr[r]);
    quickSort(st, r);
    quickSort(r+1, en);
}
