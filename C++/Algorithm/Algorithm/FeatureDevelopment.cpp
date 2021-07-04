//
//  FeatureDevelopment.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/03.
//

#include "FeatureDevelopment.hpp"

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> workQueue;
    
    for (int i = 0; i<progresses.size(); i++) {
        workQueue.push(progresses[i]);
    }
    while (workQueue.size() != 0) {
        for (int i = 0; i < workQueue.size(); i++) {
            int d = workQueue.front();
            workQueue.pop();
            workQueue.push(d + speeds.at(i));
        }
        int workCount = 0;
        while (true) {
            if (workQueue.size() > 0 && workQueue.front() >= 100) {
                workCount++;
                workQueue.pop();
                speeds.erase(speeds.begin());
                continue;
            }
            break;
        }
        if (workCount > 0)
            answer.push_back(workCount);
    }
    return answer;
}
