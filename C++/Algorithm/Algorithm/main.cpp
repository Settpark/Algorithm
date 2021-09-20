//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include <iostream>
#include <string>
#include <vector>
#include "BOJ10807.hpp"

using namespace std;

int solution() {
    int arr[202] = {};
    int cnt = 0;
    cin >> cnt;
    for (int i=0; i<cnt; i++) {
        int temp = 0;
        cin >> temp;
        arr[temp+100]++;
    }
    int result = 0;
    cin >> result;
    return arr[result+100];
}

int main(int argc, const char * argv[]) {
    cout << solution();
}
