//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "binarySearch/Binarysearch.hpp"

int main(int argc, const char * argv[]) {
    BinarySearch bin = BinarySearch();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> bin.n;
    for(int i = 0; i < bin.n; i++) cin >> bin.arr[i];
    sort(bin.arr, bin.arr + bin.n);
    int m;
    cin >> m;
    while (m--) {
        int t;
        cin >> t;
        cout << binary_search(bin.arr, bin.arr + bin.n, t) << '\n';
    }
}

