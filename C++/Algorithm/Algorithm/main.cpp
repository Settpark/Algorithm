//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "MenuRenewal.hpp"

int main(int argc, const char * argv[]) {
    MenuRenewal menu = MenuRenewal();
    vector<string> v = {"ABCFG", "AC", "CDE", "ACDE", "BCFG", "ACDEH"};
    for (auto e: menu.solution(v, {2,3,4}))
        cout << e << ' ';
    return 0;
}

