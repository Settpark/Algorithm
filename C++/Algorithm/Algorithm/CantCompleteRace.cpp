//
//  CantCompleteRace.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/03.
//

#include "CantCompleteRace.hpp"

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> nameCount;
    for(int i = 0; i<participant.size(); i++) {
        nameCount[participant[i]]++;
    }
    for(int j =0; j<completion.size(); j++) {
        nameCount[completion[j]]--;
    }
    for(int k = 0; k<participant.size(); k++) {
        if (nameCount[participant[k]] > 0)
            answer = participant[k];
    }
    return answer;
}
