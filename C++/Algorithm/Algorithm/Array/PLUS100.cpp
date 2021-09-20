//
//  PLUS100.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/20.
//

#include "PLUS100.hpp"

int PLUS100::solutionPLUS100(int arr[], int N) {
    int occur[101] = {};
    for(int i = 0; i<N; i++) {
        if(occur[100-arr[i]] == 1)
            return 1;
        occur[arr[i]]++;
    }
    return 0;
}
