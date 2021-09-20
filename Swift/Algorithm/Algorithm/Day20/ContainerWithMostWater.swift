//
//  https-::leetcode.com:problems:container-with-most-water:.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/16.
//

import Foundation

class ContainerWithMostWater {
    func maxArea(_ height: [Int]) -> Int {
        var result = 0
        var index1 = 0
        var index2 = height.count - 1
        while index1 < index2 {
            let subject = min(height[index1], height[index2])
            let width = abs(index1 - index2)
            let water = subject * width
            result = max(result, water)            
            if height[index1] < height[index2] {
                index1 += 1
            }
            else {
                index2 -= 1
            }
        }
        return result
    }
}
