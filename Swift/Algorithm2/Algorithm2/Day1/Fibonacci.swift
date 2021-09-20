//
//  fibonacci.swift
//  Algorithm2
//
//  Created by 박정하 on 2021/09/05.
//

import Foundation

class Fibonacci {
    func fib(_ n: Int) -> Int {
        if n == 0 {
            return 0
        }
        else if n == 1 {
            return 1
        }
        else {
            return fib(n) + fib(n - 1)
         }
    }
}
