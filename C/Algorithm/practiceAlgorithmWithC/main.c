//
//  main.cpp
//  PracticeAlgorithmWithC
//
//  Created by 박정하 on 2021/06/11.
//

#include "MergeSort.h"
#define MAX_SIZE 8


int main(int argc, const char * argv[]) {
    int i;
    int n = MAX_SIZE;
    int list[8] = {21, 10, 12, 20, 25, 13, 15, 22};
    
    // 합병 정렬 수행(left: 배열의 시작 = 0, right: 배열의 끝 = 7)
    merge_sort(list, 0, n - 1);
    
    // 정렬 결과 출력
    for(i=0; i<n; i++){
        printf("%d\n", list[i]);
    }
    return 0;
}
