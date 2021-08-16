//
//  RevealCardsInIncreasingOrder.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/29.
//

import Foundation

class RevealCardsInIncreasingOrder {
    func deckRevealedIncreasing(_ deck: [Int]) -> [Int] {
        var copydeck = deck
        copydeck.sort(by: >)
        var result: [Int] = []
        for _ in 0..<copydeck.count {
            if result.count == 0 {
                result.append(copydeck.removeFirst())
            }
            else {
                let last = result.removeLast()
                result.insert(last, at: 0)
                result.insert(copydeck.removeFirst(), at: 0)
            }
        }
        return result
    }
}


