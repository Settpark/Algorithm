//
//  Camouflage.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/15.
//

import Foundation

class Camouflage {
    func solution(_ clothes:[[String]]) -> Int {
        var dictionary: [String:[String]] = [:]
        for i in 0..<clothes.count {
            if dictionary[clothes[i][1]] != nil {
                dictionary[clothes[i][1]]?.append(clothes[i][0])
            }
            else {
                dictionary[clothes[i][1]] = [clothes[i][0]]
            }
        }
        let count = dictionary.mapValues{$0.count}.values
        return count.reduce(1){$0*($1+1)} - 1
    }
}

/*dictionary.forEach { key, myvalue in
 categories += myvalue.count
 values *= myvalue.count
 }
 result = categories + values
 if dictionary.count == 1 {
 result -= (dictionary.first?.value.count)!
 }*/
