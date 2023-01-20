/*
dfs 구현
*/

import Foundation

// 그래프는 인접행렬로 표현
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
  dfsVisited[startNode] = true
  print(startNode, terminator: " ")
  var adjacents = graph[startNode]
  for adjacent in adjacents {
    if dfsVisited[adjacent] == false {
      dfs(startNode: adjacent)
    }
  }
}

func dfsStart() {
  print("dfs start")
  dfs(startNode: 1)
  print("")
  print("dfs end")
}

dfsStart()
