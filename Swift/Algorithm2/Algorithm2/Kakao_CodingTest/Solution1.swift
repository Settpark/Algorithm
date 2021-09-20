//
//  Solution1.swift
//  Algorithm2
//
//  Created by 박정하 on 2021/09/11.
//

import Foundation

class Solution1 {
    func solution(_ id_list:[String], _ report:[String], _ k:Int) -> [Int] {
        var result: [Int] = Array<Int>(repeating: 0, count: id_list.count)
        var reportedList: [String : Int] = [:]
        var reporterList: [String : [String]] = [:]
        
        for re in report {
            let reporter = re.split(separator: " ")[0].description
            let reported = re.split(separator: " ")[1].description
            if let temp = reporterList[reporter], temp.contains(reported) {
                continue
            }
            reporterList[reporter, default: []].append(reported)
        }
        
        reporterList.forEach { key, value in
            value.forEach { temp in
                reportedList[temp, default: 0] += 1
            }
        }
        
        print(reporterList)
        print(reportedList)
        
        reportedList.forEach { edkey, edvalue in
            if edvalue >= k {
                for i in 0..<id_list.count {
                    if let temp = reporterList[id_list[i]], temp.contains(edkey) {
                        result[i] += 1
                    }
                }
            }
        }
        
        return result
    }
}
