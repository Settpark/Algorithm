//
//  abcdefg.swift
//  Algorithm
//
//  Created by 박정하 on 2021/09/16.
//

import Foundation

class abcdefg {
    public func solution(_ A : inout [Int]) -> Int {
        if (A.count  <= 2 ){
            return 0
        }
        var h = 0
        var r = 0
        var max = 0
        var cnt = 0
        for i in 1..<A.count {
            if(A[i] > A[h]){
                cnt = (A[h]-A[r])
                h = i
                r = h
            } else if(A[i] > A[r]) {
                cnt = (A[i]-A[r])
                //console.log('222 '+cnt);
            } else if(A[i] < A[r]) {
                r = i
                // console.log('low'+cnt);
            }
            if(max < cnt){
                max = cnt;
            }
        }
        
        return max;
    }
}
