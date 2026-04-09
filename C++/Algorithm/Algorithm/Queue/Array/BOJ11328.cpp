//
//  BOJ11328.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/21.
//

#include "BOJ11328.hpp"

void BOJ11328::solution() {
    int arr[26];
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string a,b;
        cin >> a >> b;
        for (auto e: a) {
            arr[e-'a']++;
        }
        for (auto e: b) {
            if (arr[e-'a'] == 0)
                cout << "Impossible";
            else
                cout << "Possible";
        }
    }
}
