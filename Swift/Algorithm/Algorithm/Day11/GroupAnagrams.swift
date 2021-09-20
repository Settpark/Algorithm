//
//  GroupAnagrams.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/26.
//

import Foundation

class GroupAnagrams {
    func groupAnagrams(_ strs: [String]) -> [[String]] {
        var temp = [String: [String]]()
        for i in 0..<strs.count {
            let mytemp = String(strs[i].sorted())
            temp[mytemp, default: []] += [strs[i]]
        }
        return Array(temp.values)
    }
}
