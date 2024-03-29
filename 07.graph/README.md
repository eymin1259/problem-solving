# Graph
- 정의 : 노드(or Vertex)와 edge로 이루어진 자료구조
- 종류
  - 방향그래프, 무방향그래프
  - 순환그래프, 비순환그래프
  - etc
- 인접행렬
  - 이차원배열을 이용해서 표현
  - 공간복잡도 : O(V^2)
  - 두 노드의 연결여부 확인 : O(1)
  - 한 노드에서 다른 모든 노드 연결 확인 : O(V)
  - 두 정점 연결여부 자주 확인할때 효율적
- 인접리스트
  - V개의 리스트를만들고 각각의 리스트는 자신과 연결된 노드들을 저장
  - 공간복잡도 : O(V + E)
  - 두 노드u,v의 연결여부 확인 : O( min(deg(u), deg(v)) )
  - 한 노드v에서 다른 모든 노드 연결 확인 : O(deg(v))
  - 특정 정점에서 연결된 모든 정점 확인할때 효율적

### depth first search - 깊이우선탐색
- 깊은 부분을 우선적으로 탐색 : 멀리 있는 노드를 우선으로 탐색
- 동작원리 : 스택
- 구현방법 : 재귀함수이용 (콜스택)
- dfs 탐색순서 = 스택 삽입순서
- sudo
  - 노드를 스택삽입, 방문처리 및 출력
  - 방문하지않은 인접노드들을 스택에 삽입


### breadth first search - 너비우선탐색
- 가까운 노드부터 탐색
- 동작원리 : 큐
- 구현방법 : 큐 자료구조
- bfs 탐색순서 = 큐 삽입순서 = 큐에서 꺼내는 순서
- sudo
  - 시작노드를 큐삽입, 방문처리
  - 큐가 빌때까지 반복시작
    - 큐에서 하나 꺼냄 -> 출력
    - 해당 노드의 인접노드중 방문하지않은 노드를 모두 큐에 삽입, 방문처리

