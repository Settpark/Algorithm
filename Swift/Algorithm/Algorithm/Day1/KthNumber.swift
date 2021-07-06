//
//  KthNumber.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/05.
//

import Foundation

class KthNumber {
    func solution(_ array:[Int], _ commands:[[Int]]) -> [Int] {
        var myArr: [Int] = []
        for i in 0..<commands.count {
            var tempArr: [Int] = []
            for j in (commands[i][0]-1)..<commands[i][1] {
                tempArr.append(array[j])
            }
            tempArr.sort()
            myArr.append(tempArr[commands[i][2] - 1])
        }
        return myArr
    }
}
