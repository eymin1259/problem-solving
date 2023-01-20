# problem-solving
problem solving : BOJ, programmers, sw expert academy, etc


### 백준 input 받는법
- 한줄에 여러 숫자 input 받기
  - Ex) 1 2 3 4 -> [1,2,3,4]
  - let iuput = readLine()!.split(separator: " "). map { Int($0)! }
- 한줄씩 숫자 input 받기
  - let iuput = Int(readLine()!)!

### array 특정값으로 초기화
- var arr1 = Array(repeating: 0, count: 3)     // arr1 = [0, 0, 0]
- var arr2 = Array(repeating: false, count: 4) // arr2 = [false, false, false, false]
- var arr3 = [Bool](repeating: true, count: 3) // arr3 = [true, true, true] 
