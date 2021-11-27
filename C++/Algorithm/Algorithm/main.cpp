//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "Dynamic_Programming/BOJ2579.hpp"

int n[100007];
pair<int, int> s[100007];

int main(int argc, const char * argv[]) {
    int n; cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> s[i].second >> s[i].first; //second는 끝나는 시간.
    }
    sort(s, s+n);
    int result = 0;
    int t = 0;
    for(int i = 0; i<n; i++) {
        if (s[i].second < t) continue;
        result++;
        t = s[i].first;
    }
    
    cout << result;
}

