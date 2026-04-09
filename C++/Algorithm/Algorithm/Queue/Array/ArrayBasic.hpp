//
//  InsertRemoveArray.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/19.
//

#ifndef InsertRemoveArray_hpp
#define InsertRemoveArray_hpp

using namespace std;

class ArrayBasic {
public:
    void insert(int idx, int num, int arr[], int& len);
    void erase(int idx, int arr[], int& len);
    void printArr(int arr[], int& len);
    void insert_test();
    void erase_test();
};
#endif /* InsertRemoveArray_hpp */
