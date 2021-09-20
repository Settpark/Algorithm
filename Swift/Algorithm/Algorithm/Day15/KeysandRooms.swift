//
//  KeysandRooms.swift
//  Algorithm
//
//  Created by 박정하 on 2021/08/08.
//

import Foundation

class KeysandRooms {
    func canVisitAllRooms(_ rooms: [[Int]]) -> Bool {
        var findedRooms: [Int] = []
        findRoom(rooms: rooms, roomNumber: 0, findedRooms: &findedRooms)
        return findedRooms.count == rooms.count
    }
    
    func findRoom(rooms: [[Int]], roomNumber: Int, findedRooms: inout [Int]) {
        findedRooms.append(roomNumber)
        for i in 0..<rooms[roomNumber].count {
            if !findedRooms.contains(rooms[roomNumber][i]) {
                findRoom(rooms: rooms, roomNumber: rooms[roomNumber][i], findedRooms: &findedRooms)
            }
        }
    }
}
