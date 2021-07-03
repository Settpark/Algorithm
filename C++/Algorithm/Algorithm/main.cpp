//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion);

int main(int argc, const char * argv[]) {
    vector<string> participant = {"Leo", "Zedd", "Sett"};
    vector<string> completion = {"Leo", "Sett"};
    cout << solution(participant, completion) << endl;
    return 0;
}

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
