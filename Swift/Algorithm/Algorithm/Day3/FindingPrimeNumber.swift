//
//  FindingPrimeNumber.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/08.
//

import Foundation

class FindingPrimeNumber {
    func solution(_ numbers:String) -> Int {
        var result = 0
        var charNum = Array(numbers)
        var IntNumbers: [Int] = []
        for i in 0..<charNum.count {
            let tempInt = Int(charNum[i].description)
            IntNumbers.append(tempInt!)
        }
        return 0
    }
}
