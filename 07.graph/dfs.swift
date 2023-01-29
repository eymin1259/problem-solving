/*
dfs sudo
노드를 스택삽입, 방문처리 및 출력
방문하지않은 인접노드들을 스택에 삽입
*/

import Foundation

// 그래프는 인접리스트로 표현
var graph : [[Int]] = [
  [],
  [2,3,8],
  [1,7],
  [1,4,5],
  [3,5],
  [3,4],
  [7],
  [2,6,8],
  [1,7]
]

// 방문여부저장
var dfsVisited = [Bool](repeating: false, count: graph.count)

// dfs 함수
func dfs(startNode: Int) {
  // 노드 방문처리 및 출력 (함수호출됨 = 스택에 삽입된노드는 방문된 노드)
  dfsVisited[startNode] = true
  print(startNode, terminator: " ")

  // 방문하지않은 인접노드들을 
  for adjacent in  graph[startNode] {
    if dfsVisited[adjacent] == false {
      // 스택에 삽입
      dfs(startNode: adjacent)
    }
  }
}

func dfsStart() {
  print("")
  print("dfs start")
  dfs(startNode: 1)
  print("")
  print("dfs end")
}

dfsStart()
