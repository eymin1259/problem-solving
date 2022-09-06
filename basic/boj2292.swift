// https://www.acmicpc.net/problem/2292

import Foundation

let room = Int(readLine()!)!
var count = 1
var sum = 1
while true {
    if sum >= room {
        print(count)
        break
    } else {
        sum = sum + (count*6)
        count += 1
    }
}
