//
//  MinimizeMaximumPairSuminArray.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/15.
//

import Foundation

class MinimizeMaximumPairSuminArray {
    func minPairSum(_ nums: [Int]) -> Int {
        var result = 0
        var mynums = nums
        var resultNums: [Int] = []
        mynums.sort(by: <)
        for i in 0..<mynums.count / 2 {
            resultNums.append(mynums[i] + mynums[mynums.count - i - 1])
        }
        print(resultNums)
        for i in 0..<resultNums.count {
            result = max(result, resultNums[i])
        }
        return result
    }
}
