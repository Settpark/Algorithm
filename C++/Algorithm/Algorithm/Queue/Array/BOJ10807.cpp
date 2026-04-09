//
//  BOJ10807.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/20.
//

#include "BOJ10807.hpp"

int BOJ10807::solution10807() {
    int arr[101] = {};
    int cnt = 0;
    cin >> cnt;
    for (int i = 0; i<cnt; i++) {
        int temp = 0;
        cin >> temp;
        arr[temp]++;
    }
    int result = 0;
    cin >> result;
    return arr[result];
}
