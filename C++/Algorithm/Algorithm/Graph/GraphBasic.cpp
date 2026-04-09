//
//  GraphBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/05.
//

#include "GraphBasic.hpp"

void GraphBasic::drawdirectgraph() {
    int adj_matrix[10][10] = {};
    int v, e; // v는 정점, e는 간선
    cin >> v >> e;
    for (int i = 0; i<e; i++) {
        int k, l;
        cin >> k >> l;
        adj_matrix[k][l] = 1;
    }
    
    for (int i = 0; i<v; i++) {
        for (int j = 0; j<v; j++) {
            cout << adj_matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}

void GraphBasic::drawundirectgraph() {
    int adj_matrix[10][10] = {};
    int v, e; // v는 정점, e는 간선
    cin >> v >> e;
    for (int i = 0; i<e; i++) {
        int k, l;
        cin >> k >> l;
        adj_matrix[k][l] = 1;
        adj_matrix[l][k] = 1;
    }
    
    for (int i = 0; i<v; i++) {
        for (int j = 0; j<v; j++) {
            cout << adj_matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}
