
/*
프로그래머스 - 체육복
https://school.programmers.co.kr/learn/courses/30/lessons/42862
*/

import Foundation

func solution(_ n:Int, _ lost:[Int], _ reserve:[Int]) -> Int {
    
    var nArr = Array(repeating: true, count: n+1)
    var reserve2 = reserve.sorted()
    
    for (idx, lostId) in lost.enumerated() {
        nArr[lostId] = false
    }
    
    for (idx, reserveId) in reserve2.enumerated() {
        if  nArr[reserveId] == false {
            nArr[reserveId] = true
            reserve2[idx] = 0
        } 
    }
    
    for (idx, reserveId) in reserve2.enumerated() {
        if reserveId != 0, reserveId - 1 >= 0, nArr[reserveId - 1] == false {
             nArr[reserveId - 1] = true
        } 
        else if reserveId != 0, reserveId + 1 < nArr.count, nArr[reserveId + 1] == false {
            nArr[reserveId + 1] = true
        }   
    } 
    
    return nArr.filter{$0 == true}.count - 1
}
