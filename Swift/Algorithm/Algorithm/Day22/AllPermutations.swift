//
//  AllPermutations.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/22.
//

import Foundation

//class AllPermutations {
//
//    let input = Int(readLine()!)!
//    var result: [String] = [String](repeating: " ", count: input)
//    var visited: [Bool] = [Bool](repeating: false, count: input)
//
//    func solution(_ depth: Int) {
//        if depth == input {
//            print(result.joined(separator: " "))
//            return
//        }
//
//        for i in 0..<input {
//            if visited[i] {
//                continue
//            }
//            visited[i] = true //여기서 트루를 했는데..?
//            result[depth] = "\(i+1)"
//            print(result[depth])
//            solution(depth + 1)
//            visited[i] = false //갑자기 여기서 또 풜스를?
//        }
//    }
//}
