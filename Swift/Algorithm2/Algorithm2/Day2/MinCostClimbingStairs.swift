//
//  MinCostClimbingStairs.swift
//  Algorithm2
//
//  Created by 박정하 on 2021/09/06.
//

import Foundation

class MinCostClimbingStairs {
    func minCostClimbingStairs(_ cost: [Int]) -> Int {
        var arr: [Int] = Array<Int>(repeating: 0, count: cost.count)
        arr[0] = cost[0]
        arr[1] = cost[1]
        for i in 2..<cost.count {
            arr[i] = min(arr[i-1], arr[i-2]) + cost[i]
        }
        return min(arr[cost.count-1], arr[cost.count-2])
    }
}
