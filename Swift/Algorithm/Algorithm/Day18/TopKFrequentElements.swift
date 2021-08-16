//
//  TopKFrequentElements.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/15.
//

import Foundation

class TopKFrequentElements {
    func topKFrequent(_ nums: [Int], _ k: Int) -> [Int] {
        var myValue: [Int:Int] = [:]
        var result: [Int] = []
        for num in nums {
            myValue[num, default: 0] += 1
        }
        let a = myValue.sorted { key1, key2 in
            key1.value > key2.value
        }
        for i in 0..<k {
            result.append(a[i].key)
        }
        return result
    }
}
