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

void solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int arr[26] = {};
        string a,b;
        cin >> a >> b;
        for (auto e: a)
            arr[e-'a']++;
        for (auto e: b)
            arr[e-'a']--;
        bool isPossible = true;
        for (auto i: arr)
            if (i != 0) isPossible = false;
        if (isPossible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}

int main(int argc, const char * argv[]) {
    solution();
}
