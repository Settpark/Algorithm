//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include <iostream>
#include <vector>

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
    for(int i = 0; i<participant.size(); i++) {
        string temp = participant[i];
        for (int j = 0; j<completion.size(); j++) {
            string temp2 = completion[j];
            if (temp == temp2) {
                participant.erase(participant.begin() + i);
                completion.erase(completion.begin() + j);
                break;
            }
        }
    }
    answer = participant[0];
    return answer;
}
