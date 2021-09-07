//
//  ClimbingStairs.swift
//  Algorithm2
//
//  Created by 박정하 on 2021/09/06.
//

import Foundation

class ClimbingStairs {
    var arr: [Int] = Array<Int>(repeating: 0, count: 100)
    func climbStairs(_ n: Int) -> Int {
        if n == 1 || n == 2 {
            return n
        }
        if arr[n] != 0 {
            return arr[n]
        }
        arr[n] = climbStairs(n - 1) + climbStairs(n - 2)
        return arr[n]
    }
}
