//
//  BOJ5397.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/30.
//

#include "BOJ5397.hpp"

void BOJ5397::solution() {
    int n; cin >> n;
    while(n--) {
        list<char> ll;
        auto it = ll.begin();
        string k; cin >> k;
        for(int i=0;i<k.size(); i++) {
            if (k[i] == '<') {
                if (it != ll.begin()) it--;
            } else if (k[i] == '>') {
                if (it != ll.end()) it++;
            } else if (k[i] == '-') {
                if (it != ll.begin()){
                    it--;
                    ll.erase(it);
                }
            } else {
                ll.insert(it, k[i]);
            }
        }
        for(auto e: ll) cout << e;
        cout << '\n';
    }
}
