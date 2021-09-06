//
//  RotateArray.swift
//  Algorithm
//
//  Created by 박정하 on 2021/09/01.
//

import Foundation

class RotateArray {
    func rotate(_ nums: inout [Int], _ k: Int) {
        for _ in 0..<k {
            let temp = nums.removeLast()
            nums.insert(temp, at: 0)
        }
    }
}
