//
//  MergeSort.c
//  PracticeAlgorithmWithC
//
//  Created by 박정하 on 2021/09/05.
//

#include "MergeSort.h"
#define MAX_SIZE 8

int sorted[MAX_SIZE];

void merge(int list[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;
    j = mid+1;
    k = left;
    
    /* 분할 정렬된 list의 합병 */
    while(i<=mid && j<=right){
        if(list[i]<=list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }
    
    // 남아 있는 값들을 일괄 복사
    if(i>mid){
        for(l=j; l<=right; l++)
            sorted[k++] = list[l];
    }
    // 남아 있는 값들을 일괄 복사
    else{
        for(l=i; l<=mid; l++)
            sorted[k++] = list[l];
    }
    
    // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
    for(l=left; l<=right; l++){
        list[l] = sorted[l];
    }
}

void merge_sort(int list[], int left, int right) {
    int mid;
    
    if (left<right) {
        mid = (left+right)/2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
        merge_sort(list, left, mid);
        merge_sort(list, mid+1, right);
        merge(list, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
    }
}
