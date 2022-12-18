/*

백준 1330번 문제
https://www.acmicpc.net/problem/1330

*/

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }

if input.first! > input.last! { 
    print(">") 
} else if input.first! == input.last! { 
    print("==") 
} else if input.first! < input.last! { 
    print("<") 
} 
