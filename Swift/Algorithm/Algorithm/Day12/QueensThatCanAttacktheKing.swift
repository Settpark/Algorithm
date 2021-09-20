//
//  QueensThatCanAttacktheKing.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/27.
//

import Foundation

class QueensThatCanAttacktheKing {
    func queensAttacktheKing(_ queens: [[Int]], _ king: [Int]) -> [[Int]] {
        var temp: [[Int]] = []
        var flag: [Int] = [0,0,0,0,0,0,0,0]
        for j in 1..<9 {
            for i in 0..<queens.count {
                if king[0] + j == queens[i][0] && king[1] == queens[i][1] {
                    if flag[0] == 0 {
                        temp.append(queens[i])
                        flag[0] = 1
                    }
                }
                if king[0] - j == queens[i][0] && king[1] == queens[i][1] {
                    if flag[1] == 0 {
                        temp.append(queens[i])
                        flag[1] = 1
                    }
                }
                if king[1] + j == queens[i][1] && king[0] == queens[i][0] {
                    if flag[2] == 0 {
                        temp.append(queens[i])
                        flag[2] = 1
                    }
                }
                if king[1] - j == queens[i][1] && king[0] == queens[i][0] {
                    if flag[3] == 0 {
                        temp.append(queens[i])
                        flag[3] = 1
                    }
                }
            }
        }
        
        for j in 1..<9 {
            for i in 0..<queens.count {
                if king[0] + j == queens[i][0] && king[1] + j == queens[i][1] {
                    if flag[4] == 0 {
                        temp.append(queens[i])
                        flag[4] = 1
                    }
                }
                if king[0] - j == queens[i][0] && king[1] + j == queens[i][1] {
                    if flag[5] == 0 {
                        temp.append(queens[i])
                        flag[5] = 1
                    }
                }
                if king[0] + j == queens[i][0] && king[1] - j == queens[i][1] {
                    if flag[6] == 0 {
                        temp.append(queens[i])
                        flag[6] = 1
                    }
                }
                if king[0] - j == queens[i][0] && king[1] - j == queens[i][1] {
                    if flag[7] == 0 {
                        temp.append(queens[i])
                        flag[7] = 1
                    }
                }
            }
        }
        return temp
    }
}
