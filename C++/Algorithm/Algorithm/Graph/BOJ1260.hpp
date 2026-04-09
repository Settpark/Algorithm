//
//  BOJ1260.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/06.
//

#ifndef BOJ1260_hpp
#define BOJ1260_hpp

#include <bits/stdc++.h>

using namespace std;

class BOJ1260 {
public:
    int v,e,s;
    vector<int> templist[1007];
    int visbfs[1007];
    int visdfs[1007];
    queue<int> Q;
    void solution();
    void bfs();
    void dfs(int cur);
};

#endif /* BOJ1260_hpp */
