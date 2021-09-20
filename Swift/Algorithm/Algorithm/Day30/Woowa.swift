//
//  woowa.swift
//  Algorithm
//
//  Created by 박정하 on 2021/09/15.
//

import Foundation

class Woowa {
    public func solution(_ A : inout [Int]) -> Int {
        var result = Array<Int>(repeating: 0, count: A.count)
        if A.count < 2 {
            return 0
        }
        
        var leftBiggest: Int = 0
        var rightBiggest: Int = 0
        
        for i in 1..<A.count - 1 {
            var index0 = 0
            var index1 = A.count - 1
            
            
            while (index0 < i) {
                if A[index0] > leftBiggest {
                    leftBiggest = A[index0]
                }
                index0 += 1
            }
            
            while (i < index1) {
                if A[index1] > rightBiggest {
                    rightBiggest = A[index1]
                }
                index1 -= 1
            }
            
            result[i] = min(leftBiggest, rightBiggest) - A[i]
            if result[i] < 0 {
                result[i] = 0
            }
        }
        return result.max()!
    }
}
