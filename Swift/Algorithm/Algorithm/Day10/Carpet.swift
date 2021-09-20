//
//  Carpet.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/22.
//

import Foundation

class Carpet {
    func solution(_ brown:Int, _ yellow:Int) -> [Int] {
        let total = brown + yellow
        var i = 1
        var tiles: [Int] = []
        var result: [Int] = []
        while i <= total {
            if total % i == 0 {
                tiles.append(i)
            }
            i += 1
        }
        for i in 0...tiles.count {
            let index = (tiles.count - 1) - i
            if (tiles[index] * 2) + (tiles[i] * 2) - 4 == brown {
                result.append(tiles[index])
                result.append(tiles[i])
                return result
            }
        }
        return result
    }
}

