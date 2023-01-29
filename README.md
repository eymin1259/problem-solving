# problem-solving
problem solving : BOJ, programmers, sw expert academy, etc

## Python3
### Python3 백준 input 받는법
- input().split() : 여러개 입력받을 때. 리스트 형태로 반환
- map(데이터 타입, 리스트) : 리스트 원소들을 해당 데이터 타입으로 변환
- 한줄에 여러 숫자 input 받기
  - Ex) 1 2 3 4 -> [1,2,3,4]
  - list = list(map(int, input().split()))
- 한줄씩 숫자 input 받기
```
list = list()
n = int(input())
for _ in range(n):
  list.append(int(input()))
```

## Swift
### Swift 백준 input 받는법
- 한줄에 여러 숫자 input 받기
  - Ex) 1 2 3 4 -> [1,2,3,4]
  - let iuput = readLine()!.split(separator: " "). map { Int($0)! }
- 한줄씩 숫자 input 받기
  - let iuput = Int(readLine()!)!

### Swift array 특정값으로 초기화
- var arr1 = Array(repeating: 0, count: 3)     // arr1 = [0, 0, 0]
- var arr2 = Array(repeating: false, count: 4) // arr2 = [false, false, false, false]
- var arr3 = [Bool](repeating: true, count: 3) // arr3 = [true, true, true] 
