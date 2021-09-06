//
//  FindtheWinneroftheCircularGame.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/31.
//

import Foundation

class FindtheWinneroftheCircularGame {
    func findTheWinner(_ n: Int, _ k: Int) -> Int {
        var arr: [Int] = []
        var index: Int = 0
        for i in 0..<n {
            arr.append(i+1)
        }
        while (arr.count != 1) {
            for _ in 0..<k - 1 {
                if index >= arr.count - 1 {
                    index = 0
                    continue
                }
                index += 1
            }
            arr.remove(at: index)
            if index > arr.count - 1 {
                index = 0
            }
        }
        return arr[0]
    }
}
