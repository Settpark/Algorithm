//
//  main.swift
//  Algorithm
//
//  Created by 박정하 on 2022/08/06.
//

import Foundation

func solution(_ commands: [String]) -> [Int] {
    var light: [Int] = [Int](repeating: 0, count: 100001)
    let arr1: [Int] = [Int](repeating: 0, count: 100001)
    var arr: [[Int]] = [[Int]](repeating: arr1, count: 100001)
    var x: Int = 0
    var y: Int = 0
    
    for command in commands {
        if command == "FORWARD" {
            x += 1
            arr[y][x] += 1
            light[y] += 1;
        } else if command == "UP" {
            y += 1
            arr[y][x] += 1
        } else if command == "BACK" {
            let temp = x - 1;
            if temp < 0 {
                continue;
            }
            if arr[y][temp] != 0 {
                arr[y][x] -= 1
                x -= 1
                light[y] -= 1;
            }
        } else if command == "DOWN" {
            if (light[y] != 0 ) {
                while arr[y][x] != 0 {
                    arr[y][x] = 0;
                    x-=1;
                }
                y -= 1;
                continue;
            }
        }
    }
    var answer: [Int] = []
    answer.append(x);
    answer.append(y);
    
    return answer
}

print(solution(["DOWN", "DOWN"]))
