//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "RESOLVE/resolvedDP.hpp"

int main(int argc, const char * argv[]) {
    vector<int> v = {1,0,0,1,2,0,2}; //
    resolvedDP r = resolvedDP();
    cout << r.solution(v) << '\n';
}

