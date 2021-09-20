//
//  RomanToInteger.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/06.
//

import Foundation

class RomanToInteger {
    func romanToInt(_ s: String) -> Int {
        var answer: Int = 0
        let numberTable: [String: Int] = ["I": 1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000]
        var before = 0
        for string in s.reversed() {
            let current = numberTable[string.description]
            if current! >= before {
                before = current!
                answer += current! * 1
            }
            else {
                before = current!
                answer += current! * -1
            }
        }
        return answer
    }
}


