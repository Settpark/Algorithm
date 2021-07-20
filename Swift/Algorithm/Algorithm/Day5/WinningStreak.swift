//
//  WinningStreak.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/12.
//

import Foundation

class WinningStreak {
    func solution(_ win_lose:[Int]) -> Int{
        var result = 0
        var winningStreakCount = 0
        for i in 0..<win_lose.count {
            if win_lose[i] == 1 {
                winningStreakCount += 1
                for j in i+1..<win_lose.count {
                    if (win_lose[j] == 1) {
                        winningStreakCount += 1
                    }
                    else {
                        break
                    }
                }
                if result < winningStreakCount {
                    result = winningStreakCount
                }
                winningStreakCount = 0
            }
        }
        return result
    }
}
