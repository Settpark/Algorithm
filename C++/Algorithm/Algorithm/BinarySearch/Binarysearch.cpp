//
//  Binarysearch.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/31.
//

#include "Binarysearch.hpp"

int BinarySearch::binarySearch(int target) {
    int st = 0, en = n - 1;
    while(st <= en) {
        int mid = (st + en)/2;
        if (arr[mid] > target) {
            en = mid - 1;
        }
        else if (arr[mid] < target) {
            st = mid + 1;
        }
        else return 1;
    }
    return 0;
}
