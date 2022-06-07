//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//vector<vector<int>> nodes(1001);
//bool visit[1001] = { false };
//void dfs(int n) {
//	printf("%d ", n);
//	for (int i : nodes[n]) {
//		if (!visit[i]) {
//			visit[i] = true;
//			dfs(i);
//		}
//	}
//}
//
//int main() {
//	int N, M, start; cin >> N >> M >> start;
//	for (int i = 0; i < M; i++) {
//		int a, b; cin >> a >> b;
//		nodes[a].push_back(b);
//		nodes[b].push_back(a);
//	}
//	for (int i = 1; i <= N; i++) {
//		sort(nodes[i].begin(), nodes[i].end());
//	}
//	visit[start] = true;
//	dfs(start);
//	printf("\n");
//	bool bvisit[1001] = { false };
//	bvisit[start] = true;
//	queue<int> q; 
//	q.push(start);
//	while (!q.empty()) { //bfs
//		int n = q.front();
//		printf("%d ", n);
//		q.pop();
//		for (int i : nodes[n]) {
//			if (!bvisit[i]) {
//				bvisit[i] = true;
//				q.push(i);
//			}
//		}
//	}
//	return 0;
//}