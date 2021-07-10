//
//  ContainsDuplicate.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/08.
//

import Foundation

class ContainsDuplicate {
    func containsDuplicate(_ nums: [Int]) -> Bool {
        var result: Bool = false
        var tempNums = nums
        tempNums.sort(by: <)
        for i in 0..<tempNums.count - 1 {
            if (tempNums[i] == tempNums[i+1]) {
                result = true
                break
            }
        }
        return result
    }
}
