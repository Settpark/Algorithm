//
//  BOJ2577.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/21.
//

#include "BOJ2577.hpp"

void BOJ2577::solutionBOJ2577() {
    int arr[100] = {};
    int a,b,c = 0;
    cin >> a >> b >> c;
    int sum = a*b*c;
    while (sum > 0) {
        cout << "돌고 있니??";
        arr[sum%10]++;
        sum /= 10;
    }
    for (auto e : arr)
        cout << e << ' ';
}
