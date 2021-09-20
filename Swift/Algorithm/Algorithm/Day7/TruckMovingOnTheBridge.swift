//
//  TruckMovingOnTheBridge.swift
//  Algorithm
//
//  Created by 박정하 on 2021/07/15.
//

import Foundation

class TruckMovingOnTheBridge {
    func solution(_ bridge_length:Int, _ weight:Int, _ truck_weights:[Int]) -> Int {
        var maxWeight = weight
        var waitingTruck = truck_weights
        var ingTruck: [(Int,Int)] = []
        var resultTruck: [Int] = []
        var result = 0
        while resultTruck.count != truck_weights.count {
            if waitingTruck.count != 0 {
                if maxWeight >= waitingTruck[0] {
                    maxWeight -= waitingTruck[0]
                    ingTruck.append((waitingTruck[0], 1))
                    waitingTruck.remove(at: 0)
                }
            }
            for i in 0..<ingTruck.count {
                ingTruck[i].1 += 1
            }
            if ingTruck.count != 0 {
                if ingTruck[0].1 > bridge_length {
                    resultTruck.append(ingTruck[0].0)
                    maxWeight += ingTruck[0].0
                    ingTruck.removeFirst()
                }
            }
            result += 1
        }
        return result + 1
    }
}
