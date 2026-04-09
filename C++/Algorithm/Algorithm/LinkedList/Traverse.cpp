//
//  Traverse.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/22.
//

#include "Traverse.hpp"

void Traverse::solution() {
    int capacity = 100;
    int data[capacity], pre[capacity], nxt[capacity];
    //int unused = 1;
    
    fill(pre, pre+capacity, -1);
    fill(nxt, nxt+capacity, -1);
    
    data[0] = -1;
    pre[0] = -1;
    nxt[0] = 2;
    
    data[2] = 13;
    pre[2] = 0;
    nxt[2] = 1;
    
    data[1] = 65;
    pre[1] = 2;
    nxt[1] = 4;
    
    data[4] = 21;
    pre[4] = 1;
    nxt[4] = 5;
    
    data[5] = 17;
    pre[5] = 4;
    nxt[5] = -1;
    
    int cur = nxt[0];
    
    while(cur != -1) {
        cout << data[cur] << '\n';
        cur = nxt[cur];
    }
}
