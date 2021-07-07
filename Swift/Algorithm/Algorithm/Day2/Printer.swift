//
//  Printer.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/06.
//

import Foundation

class Printer {
    func solution(_ priorities:[Int], _ location:Int) -> Int {
        var answer: Int = 0
        var q: [(Int,Int)] = []
        var pq = priorities.sorted(by: >)
        for i in 0..<priorities.count {
            q.append((i,priorities[i]))
        }
        while (!q.isEmpty) {
            let i: Int = q.first!.0
            let p: Int = q.first!.1
            q.remove(at: 0)
            
            if (p == pq.first) {
                pq.remove(at: 0)
                answer += 1
                
                if (i == location) {
                    break
                }
            }
            else {
                q.append((i,p))
            }
        }
        
        return answer
    }
}

