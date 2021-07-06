//
//  LargestNumber.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/05.
//

import Foundation

class LargestNumber {
    func solution(_ numbers:[Int]) -> String {
        var result: String = ""
        var tempNumbers = numbers
        for i in 0..<tempNumbers.count {
            while tempNumbers[i]/1000 < 1 {
                
            }
        }
        return result
    }
}

class temp {
    func solution(_ numbers:[Int]) -> String {
        var tempNumbers: [Int] = []
        var originNumbers: [Int] = numbers
        for i in 0..<numbers.count {
            tempNumbers.append(divideNumber(number: numbers[i]))
        }
        var temp: Int = 0
        var temp2: Int = 0
        for i in (0..<(tempNumbers.count)).reversed() {
            for j in 0..<i {
                if (tempNumbers[j]<tempNumbers[j+1]) {
                    temp = originNumbers[j]
                    originNumbers[j] = originNumbers[j+1]
                    originNumbers[j+1] = temp
                }
                else if (tempNumbers[j] == tempNumbers[j+1]) {
                    let a = divideSecond(number: originNumbers[j])
                    let b = divideSecond(number: originNumbers[j+1])
                    if (a < b) {
                        temp2 = originNumbers[j]
                        originNumbers[j] = originNumbers[j+1]
                        originNumbers[j+1] = temp2
                    }
                }
            }
        }
        var result: String = ""
        for i in 0..<originNumbers.count {
            result += String(originNumbers[i])
        }
        return result
    }
    
    func divideNumber(number: Int) -> Int {
        var result = 0
        if (number >= 1000) {
            result = number / 1000
        }
        else if (number >= 100) {
            result = number / 100
        }
        else if (number >= 10) {
            result = number / 10
        }
        else {
            result = number
        }
        return result
    }
    
    func divideSecond(number:Int) -> Int {
        var result = 0
        if (number >= 1000) {
            result = number % 1000 / 100
        }
        else if (number >= 100) {
            result = number % 100 / 10
        }
        else if (number >= 10) {
            result = number % 10
        }
        else {
            result = number
        }
        return result
    }
}
