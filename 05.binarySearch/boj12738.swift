/*
boj 12738
binary search

문제
수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.
예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.

입력
첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000,000)이 주어진다.
둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (-1,000,000,000 ≤ Ai ≤ 1,000,000,000)

출력
첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다.

*/


import Foundation

let arrLen = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map {Int($0)!}

//  binary search
func lowerBound(s: Int, e: Int, target: Int) -> Int {
    var start = s
    var end = e
    while start < end {
        let mid = (start + end) / 2
        if res[mid] < target {
            start = mid + 1
        } else {
            end = mid
        }
    }
    return end
}

var res: [Int] = []

for num in arr {
    if res.count == 0 {
        res.append(num)
        continue
    }
    
    if let resLast = res.last, resLast < num {
        res.append(num)
        continue
    }
    
    let idx = lowerBound(s:0, e: res.count-1, target: num)
    res[idx] = num
}

print(res.count)
