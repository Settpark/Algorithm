//
//  Heap.hpp
//  PracticeAlgorithmWithC
//
//  Created by 박정하 on 2021/06/11.
//

#ifndef Heap_hpp
#define Heap_hpp

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef int ElementType;

typedef struct tageHeapNode {
    ElementType Data;
} HeapNode;

typedef struct tagHeap {
    HeapNode* Nodes;
    int Capacity;
    int UsedSize;
} Heap;

Heap* HEAP_Create( int InitialSize );
void HEAP_Destroy( Heap* H );
void HEAP_Insert(Heap* H, ElementType NewData);
void HEAP_DeleteMin( Heap* H, HeapNode* Root );
int HEAP_GetParent( int Index );
int Get_LeftChild( int Index );
void HEAP_SwapNodes( Heap* H, int Index1, int Index2 );
void HEAP_PrintNodes( Heap* H );



#endif /* Heap_hpp */
