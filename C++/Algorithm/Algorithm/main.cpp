//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include "FeatureDevelopment.hpp"

int main(int argc, const char * argv[]) {
    vector<int> progress {95, 90, 99, 99, 80, 99};
    vector<int> speeds {1, 1, 1, 1, 1, 1};
    for (int i = 0; i<solution(progress, speeds).size(); i++) {
        cout << solution(progress, speeds)[i] << endl;
    }
    return 0;
}

