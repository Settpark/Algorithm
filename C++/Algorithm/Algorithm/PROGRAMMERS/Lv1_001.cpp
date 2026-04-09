//
//  Lv1_001.cpp
//  Algorithm
//
//  Created by 박정하 on 2022/01/05.
//

#include "Lv1_001.hpp"

int Lv1_001::result(int input) {
    switch (input) {
        case 6:
            return 1;
        case 5:
            return 2;
        case 4:
            return 3;
        case 3:
            return 4;
        case 2:
            return 5;
    }
    return 6;
}

vector<int> Lv1_001::solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int high = 0;
    int low = 0;
    for (auto e1: lottos) {
        if (e1 == 0) high++;
        for (auto e2: win_nums) {
            if (e1 == e2) {
                high++;
                low++;
            }
        }
    }
    answer.push_back(result(high));
    answer.push_back(result(low));
    return answer;
}
