//
//  InsertRemoveArray.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/19.
//

#include <iostream>
#include "ArrayBasic.hpp"

using namespace std;

void ArrayBasic::insert(int idx, int num, int arr[], int& len){
    for (int i = len; i > idx; i--)
        arr[i] = arr[i-1];
    arr[len] = 10;
    len++;
}

void ArrayBasic::erase(int idx, int arr[], int& len){
    for (int i = idx; i < len - 1; i++)
        arr[i] = arr[i+1];
    len--;
    /* len--;
     for (int i = idx; i < len; i++)
         arr[i] = arr[i+1]; */ //모범 답안은 이렇게 풀었음. len가 문제가 될 것 같았는데 아니네??
}

void ArrayBasic::printArr(int arr[], int& len){
    for(int i = 0; i < len; i++) cout << arr[i] << ' ';
    cout << "\n\n";
}

void ArrayBasic::insert_test(){
    cout << "***** insert_test *****\n";
    int arr[10] = {10, 20, 30};
    int len = 3;
    ArrayBasic().insert(3, 40, arr, len); // 10 20 30 40
    printArr(arr, len);
    ArrayBasic().insert(1, 50, arr, len); // 10 50 20 30 40
    printArr(arr, len);
    ArrayBasic().insert(0, 15, arr, len); // 15 10 50 20 30 40
    printArr(arr, len);
}

void ArrayBasic::erase_test(){
    cout << "***** erase_test *****\n";
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;
    ArrayBasic().erase(4, arr, len); // 10 50 40 30 20
    ArrayBasic().printArr(arr, len);
    ArrayBasic().erase(1, arr, len); // 10 40 30 20
    ArrayBasic().printArr(arr, len);
    ArrayBasic().erase(3, arr, len); // 10 40 30
    ArrayBasic().printArr(arr, len);
}
