// BOJ 1260 - DFS, BFS

// input
// 첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 
// 탐색을 시작할 정점의 번호 V가 주어진다. 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다.
// 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.

// output
// 첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. 

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>			// sort()함수
using namespace std;

vector< vector<int> > graph;	// 인접리스트로 구현된 그래프
vector<bool> visited;			// 정점 방문여부를 기록하기 위한 배열

void DFS(int start);
void BFS(int start);

int main(void) {

	int N;	//정점(vertex)의 갯수
	int M;	//간선(edge)의 갯수
	int V;	// 탐색 시작할 정점의 번호

	cin >> N >> M >> V;
	graph.resize(N + 1);			// 정점을 번호를 그대로 인덱스로 사용하기 위해 n+1의 크기 할당
	visited.resize(N + 1);			// 정점을 번호를 그대로 인덱스로 사용하기 위해 n+1의 크기 할당

	for (int m = 0; m < M; m++) {	// 두 정점 연결
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	DFS(V);
	cout << endl;
	visited.resize(0);			// 방문 기록 초기화
	visited.resize(N + 1);
	BFS(V);

	return 0;
}

void DFS(int start) {
	if (visited[start] == true) return;
	visited[start] = true;
	cout << start << " ";
    
     // 점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문
	sort(graph[start].begin(), graph[start].end());
    
	for (int i = 0; i < graph[start].size(); i++) {
		int next = graph[start][i];
		DFS(next);
	}
}

void BFS(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int i = 0; i<graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
			}
		}
	}
}
