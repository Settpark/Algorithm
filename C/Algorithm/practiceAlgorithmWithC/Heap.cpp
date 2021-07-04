//
//  Heap.cpp
//  PracticeAlgorithmWithC
//
//  Created by 박정하 on 2021/06/11.
//

#include "Heap.hpp"

int HEAP_GetParent( int Index ) {
    return (int) ((Index -1) / 2);
}

void HEAP_Insert(Heap* H, ElementType NewData) {
    int CurrentPosition = H->UsedSize;
    int ParentPosition = HEAP_GetParent(CurrentPosition);
    
    if ( H -> UsedSize == H->Capacity) {
        H->Capacity *= 2;
        H->Nodes = (HeapNode*)realloc(H->Nodes, sizeof(HeapNode) * H ->Capacity);
    }
    H -> Nodes[CurrentPosition].Data = NewData;
}

Heap* HEAP_Create( int intitialSize ) {
    Heap* NewHeap = (Heap*) malloc( sizeof(Heap) );
    NewHeap->Capacity = intitialSize;
    NewHeap->UsedSize = 0;
    NewHeap->Nodes = (HeapNode*) malloc(sizeof(HeapNode) * NewHeap->Capacity );
    printf("size: %d\n", sizeof(HeapNode));
    
    return NewHeap;
}

