//
//  InvitationVillageHead.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/05.
//

import Foundation

class InvitationVillageHead {
    func solution() {
        let input = readLine()
        let input2 = readLine()
        guard let myinput = input, let myinput2 = input2 else {
            return
        }
        var array = myinput2.components(separatedBy: " ").map{Int($0)!}
        array.sort(by: >)
        for i in 0..<Int(myinput)! {
           array[i] += (i + 1)
        }
        let result = array.max()
        print(result)
    }
}
