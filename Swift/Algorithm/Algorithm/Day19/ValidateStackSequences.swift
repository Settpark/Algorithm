//
//  ValidateStackSequences.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/15.
//

import Foundation

class ValidateStackSequences {
    func validateStackSequences(_ pushed: [Int], _ popped: [Int]) -> Bool {
        var result: [Int] = []
        var mypoped = popped
        for item in pushed {
            result.append(item)
            
            while !result.isEmpty && result.last == mypoped.first {
                result.removeLast()
                mypoped.removeFirst()
            }
        }
        return result.count == 0 ? true : false
    }
}
