//
//  Tribonacci.swift
//  Algorithm2
//
//  Created by 박정하 on 2021/09/05.
//

import Foundation

class Tribonacci {
    var temp = Array<Int>(repeating: 0, count: 100)
    
    func tribonacci(_ n: Int) -> Int {
        if n == 0 {
            return 0
        }
        if n == 1 {
            return 1
        }
        if n == 2 {
            return 1
        }
        if temp[n] != 0 {
            return temp[n]
        }
        temp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3)
        return temp[n]
    }
}
