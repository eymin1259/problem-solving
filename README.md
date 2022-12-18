# problem-solving
problem solving : BOJ, programmers, sw expert academy, etc


백준 input 받는법
- 한줄에 여러 숫자 input 받기
  - Ex) 1 2 3 4 -> [1,2,3,4]
  - let iuput = readLine()!.split(separator: " "). map { Int($0)! }
- 한줄씩 숫자 input 받기
  - let iuput = Int(readLine()!)!
