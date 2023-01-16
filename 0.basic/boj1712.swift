//
// boj 1712
// https://www.acmicpc.net/problem/1712
//

import Foundation

let arr = readLine()!.split(separator: " ").map{ Double(String($0))! }

let fixedFee = arr[0]
let produceFee = arr[1]
let price = arr[2]

if produceFee >= price {
    print(-1)
}
else {
    let pure = price - produceFee
    let floor : Int = Int(floor(fixedFee / pure))
    print(floor+1)
}
