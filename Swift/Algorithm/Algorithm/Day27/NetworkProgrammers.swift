//
//  NetworkProgrammers.swift
//  Algorithm
//
//  Created by 박정하 on 2021/09/01.
//

import Foundation

class NetworkProgrammers {
    func solution(_ n:Int, _ computers:[[Int]]) -> Int {
        var answer = 0
        var copycomputers = computers
        var visited = Array<Bool>(repeating: false, count: n)
        
        for i in 0..<n {
            if !visited[i] {
                answer += 1
                dfs(point: i, visited: &visited, computers: &copycomputers, n: n)
            }
        }
        
        return answer
    }
    
    func dfs(point: Int, visited: inout [Bool], computers: inout [[Int]], n: Int) {
        visited[point] = true
        for i in 0..<n {
            if !visited[i] && computers[point][i] == 1 {
                dfs(point: i, visited: &visited, computers: &computers, n: n)
            }
        }
    }
}
