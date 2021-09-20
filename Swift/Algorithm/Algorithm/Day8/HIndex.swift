//
//  HIndex.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/20.
//

import Foundation

class HIndex {
    func solution(_ citations:[Int]) -> Int {
        let sortedCitations = citations.sorted(by: <)
        var result = 0
        for i in 0..<sortedCitations.count {
            if sortedCitations[i] <= sortedCitations.count - i {
                result += 1
            }
            else {
                break
            }
        }
        return result
    }
}
