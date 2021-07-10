//
//  DFSBFS.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/10.
//

import Foundation

class DFSBFS {
    func solution() {
        let inputNode = (readLine()!)
        let array = inputNode.components(separatedBy: " ").map{Int($0)!}
        let inputNodeCount = Int(array[0])
        let inputBranchCount = array[1]
        let inputStartNode = Int(array[2])
        var matrix = makeMatrix(nodeCount: inputNodeCount, inputBranchCount: inputBranchCount)
        DFS(startNode: inputStartNode, matrix: matrix)
        for i in 0..<matrix.count {
            matrix[i]?.sort(by: <)
        }
        BFS(startNode: inputStartNode, matrix: matrix)
    }
    
    func DFS(startNode: Int, matrix: [Int:[Int]]) {
        var visitedQueue: [Int] = []
        var needVisitStack: [Int] = []
        
        
        needVisitStack.append(startNode)
        while !needVisitStack.isEmpty {
            let node = needVisitStack.removeLast()
            if visitedQueue.contains(node) {
                continue
            }
            else {
                visitedQueue.append(node)
                for i in 0..<matrix[node]!.count {
                    let temp = matrix[node]![i]
                    needVisitStack.append(temp)
                }
            }
        }
        print(visitedQueue)
    }
    
    func BFS(startNode: Int, matrix: [Int:[Int]]) {
        var visitedQueue: [Int] = []
        var needVisitStack: [Int] = []
        
        needVisitStack.append(startNode)
        while !needVisitStack.isEmpty {
            let node = needVisitStack.removeFirst()
            if visitedQueue.contains(node) {
                continue
            }
            else {
                visitedQueue.append(node)
                for i in 0..<matrix[node]!.count {
                    let temp = matrix[node]![i]
                    needVisitStack.append(temp)
                }
            }
        }
        print(visitedQueue)
    }
    
    func makeMatrix(nodeCount: Int, inputBranchCount: Int) -> [Int:[Int]] {
        var matrix: [Int:[Int]] = [:]
        
        for i in 1...nodeCount {
            matrix[i] = []
        }
        
        for _ in 0..<inputBranchCount {
            let inputBranchDetail = readLine()!
            let array = inputBranchDetail.components(separatedBy: " ").map{Int($0)!}
            if !matrix[array[0]]!.contains(array[1]) {
                matrix[array[0]]!.append(array[1])
            }
            if !matrix[array[1]]!.contains(array[0]) {
                matrix[array[1]]!.append(array[0])
            }
        }
        
        for i in 1...matrix.count {
            matrix[i]!.sort(by: <)
        }
        
        return matrix
    }
}
