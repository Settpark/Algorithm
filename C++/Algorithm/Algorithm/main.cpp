//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "TwoPointer/BOJ1806.hpp"

int arr[10];
int isused[10];
int n, m;

void func1(int k);

int main(int argc, const char * argv[]) {
    cin >> n >> m;
    ios::sync_with_stdio(0);
    cin.tie(0);
    func1(0);
}

void func1(int k) {
    if (k == m) {
        for (int i =0; i<m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i<=n; i++) {
        arr[k] = i;
        isused[k] = 1;
        func1(k+1);
        isused[k] = 0;
    }
}
