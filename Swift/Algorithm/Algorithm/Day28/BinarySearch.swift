//
//  BinarySearch.swift
//  Algorithm
//
//  Created by 박정하 on 2021/09/02.
//

import Foundation

class BinarySearch {
    func search(_ nums: [Int], _ target: Int) -> Int {
        let numscopy = nums.sorted(by: <)
        
        return binarySerach(nums: numscopy, target: target, low: 0, high: numscopy.count - 1)
    }
    
    func binarySerach(nums: [Int], target: Int, low: Int, high: Int) -> Int {
        if low > high {
            return -1
        }
        
        let mid = (low + high) / 2
        
        if nums[mid] == target {
            return mid
        }
        else if (nums[mid] > target) {
            return binarySerach(nums: nums, target: target, low: low, high: mid - 1)
        }
        else {
            return binarySerach(nums: nums, target: target, low: mid + 1 , high: high)
        }
    }
}
