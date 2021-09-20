//
//  FindKPairswithSmallestSums.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/08.
//

import Foundation

class FindKPairswithSmallestSums {
    func kSmallestPairs(_ nums1: [Int], _ nums2: [Int], _ k: Int) -> [[Int]] {
        var result: [[Int]] = []
        var myarr: [[Int]] = []
        
        for i in 0..<nums1.count {
            for j in 0..<nums2.count {
                let tempArr = [nums1[i], nums2[j]]
                myarr.append(tempArr)
            }
        }
        myarr.sort { a, b in
            sum(arr: a) < sum(arr: b)
        }
        for i in 0..<k {
            if i >= myarr.count {
                break
            }
            result.append(myarr[i])
        }
        return result
    }
    
    func sum(arr : [Int]) -> Int{
        var result = 0
        for i in 0..<arr.count {
            result += arr[i]
        }
        return result
    }
}
