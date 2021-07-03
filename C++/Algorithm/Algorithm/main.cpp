//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "CantCompleteRace.hpp"

int main(int argc, const char * argv[]) {
    vector<string> participant = {"Leo", "Zedd", "Sett"};
    vector<string> completion = {"Leo", "Sett"};
    cout << solution(participant, completion);
    return 0;
}

