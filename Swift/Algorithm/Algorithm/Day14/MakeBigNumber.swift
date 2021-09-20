//
//  MakeBigNumber.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/02.
//

import Foundation

class MakeBigNumber {
    func solution(_ number: String, _ k: Int) -> String {
        let numarr = Array(number)
        var mycount = k
        var result: [Character] = []
        for i in 0..<numarr.count {
            while (!result.isEmpty && result.last! < numarr[i] && mycount > 0) {
                result.removeLast()
                mycount -= 1
            }
            result.append(numarr[i])
        }
        
        while (mycount > 0) {
            result.removeLast()
            mycount -= 1
        }
        
        return String(result)
    }
}

