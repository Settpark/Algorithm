//
//  SumRootToLeafNumbers.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/21.
//

import Foundation

public class TreeNode {
    public var val: Int
    public var left: TreeNode?
    public var right: TreeNode?
    public init() { self.val = 0; self.left = nil; self.right = nil; }
    public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
    public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
        self.val = val
        self.left = left
        self.right = right
    }
}

class SumRootToLeafNumbers {
    func sumNumbers(_ root: TreeNode?) -> Int {
        
        return sumDFS(node: root, curNum: 0)
    }
    
    func sumDFS(node: TreeNode?, curNum: Int) -> Int {
        let curNum = 10 * curNum + node!.val
    
        if node?.left == nil, node?.right == nil {
            return curNum
        }
        
        var sum = 0
        
        if node?.left != nil {
            sum += sumDFS(node: node?.left, curNum: curNum)
        }
        
        if node?.right != nil {
            sum += sumDFS(node: node?.right, curNum: curNum)
        }
        
        return sum
    }
}
