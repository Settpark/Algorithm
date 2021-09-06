//
//  RabbitsinForest.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/25.
//

import Foundation

class RabbitsinForest {
    func numRabbits(_ answers: [Int]) -> Int {
        var ans = 0
        var collected: [Int:Int] = [:]
        
        for count in answers {
            if collected[count] == nil {
                collected[count] = 0
                ans += count + 1
            }
            else {
                collected[count]! += 1
            }
            
            if collected[count] == count {
                collected.removeValue(forKey: count)
            }
        }
        
        return ans
    }
}
