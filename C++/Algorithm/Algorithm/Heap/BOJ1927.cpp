//
//  BOJ1927.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/28.
//

#include "BOJ1927.hpp"

void BOJ1927::push(int x) {
    heap[++sz] = x;
    int idx = sz;
    while (idx != 1) {
        int par = idx/2;
        if (heap[idx] >= heap[par]) break;
        swap(heap[idx], heap[par]);
        idx = par;
    }
}

void BOJ1927::pop() {
    heap[1] = heap[sz--];
    int idx = 1;
    while (2*idx <= sz) {
        int lc = 2*idx, rc = 2*idx+1;
        int min = lc;
        if (rc <= sz && heap[rc] < heap[lc])
            min = rc;
        if (heap[idx] <= heap[min]) break;
        swap(heap[idx], heap[min]);
        idx = min;
    }
}

int BOJ1927::top() {
    return heap[1];
}
