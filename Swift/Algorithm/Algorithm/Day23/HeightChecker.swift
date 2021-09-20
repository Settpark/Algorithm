//
//  HeightChecker.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/23.
//

import Foundation

class HeightChecker {
    func heightChecker(_ heights: [Int]) -> Int {
        let target = heights.sorted(by: <)
        var cnt: Int = 0
        for i in 0..<heights.count {
            if heights[i] != target[i] {
                cnt += 1
            }
        }
        return cnt
    }
}
