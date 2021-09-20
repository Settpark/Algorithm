//
//  NRepeatedElementInSize2NArray.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/14.
//

import Foundation

class NRepeatedElementInSize2NArray {    
    func repeatedNTimes(_ nums: [Int]) -> Int {
        var result = 0
        let size = nums.count / 2
        var map: [Int:Int] = [:]
        for i in 0..<nums.count {
            map[nums[i]] = 0
        }
        for j in 0..<nums.count {
            map[nums[j]]! += 1
        }
        map.forEach { key, value in
            if value == size {
                result = key
            }
        }
        return result
    }
}
