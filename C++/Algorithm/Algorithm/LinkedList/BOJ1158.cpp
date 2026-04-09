//
//  BOJ1158.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/01.
//

#include "BOJ1158.hpp"

void BOJ1158::solution() {
    int n, m; cin >> n >> m;
    vector<int> v;
    vector<int> ans;
    for (int i=1; i<=n; i++) {
        v.push_back(i);
    }
    auto it = v.begin();
    while(!v.empty()) {
        for (int i=0; i<m-1; i++) {
            if (it == prev(v.end())) {
                it = v.begin();
                continue;
            }
            it++;
        }
        if(v.size() == 1) { ans.push_back(*it); it = v.erase(v.begin()); continue;}
        ans.push_back(*it);
        it = v.erase(it);
        if (it == v.end()) {
            it = v.begin();
        }
    }
    cout << '<';
    for(auto it =ans.begin(); it!=ans.end(); it++) {
        if (it != prev(ans.end())) cout << *it << ", ";
    }
    cout << *prev(ans.end()) << ">\n";
}
