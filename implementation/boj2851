/*
백준 2851
https://www.acmicpc.net/problem/2851

*/


import Foundation

var res = 0

for _ in 0...9 {
    let input = readLine()!
    let score = Int(input)!
    
    let temp = res + score
    let resDiff = abs(100 - res)
    let tempDiff = abs(100 - temp)
    
    if resDiff < tempDiff {
        break
    } else {
        res += score
    }
}

print(res)
