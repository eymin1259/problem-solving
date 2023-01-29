/*
bfs sudo
시작노드를 큐삽입, 방문처리
큐가 빌때까지 반복시작
큐에서 하나 꺼내고 출력
해당 노드의 인접노드중 방문하지않은 노드를 모두 큐에 삽입, 방문처리
*/

import Foundation

// 그래프는 인접리스트로 구현
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

// 방문여부 저장
var bfsVisited = [Bool](repeating: false, count: graph.count)

// bfs 함수
func bfs(startNode: Int) {
  // 시작노드를 큐삽입, 방문처리
  var queue = [Int]()
  queue.append(startNode)
  bfsVisited[startNode] = true

  // 큐가 빌때까지 반복시작
  while !queue.isEmpty {

    // 큐에서 하나 꺼내고 출력
    let node = queue.removeFirst()
    print(node, terminator: " ")

    // 해당 노드의 인접노드중 방문하지않은 노드를 모두 큐에 삽입, 방문처리
    for adjacent in graph[node] {
      if bfsVisited[adjacent] == false {
        queue.append(adjacent)
        bfsVisited[adjacent] = true
      }
    }
  }
}

bfs(startNode: 1)
