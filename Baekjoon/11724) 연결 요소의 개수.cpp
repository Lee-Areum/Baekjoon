//#include <iostream>
//#include <vector>
//
//using namespace std;
//bool visit[1001] = { false };
//vector<vector<int>> connect(1001);
//void dfs(int n) {
//	for (int v : connect[n]) {
//		if (!visit[v]) {
//			visit[v] = true;
//			dfs(v);
//		}
//	}
//}
//
//int main() {
//	int N, M; cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int a, b; cin >> a >> b;
//		connect[a].push_back(b);
//		connect[b].push_back(a);
//	}
//	int answer = 0;
//	for (int i = 1; i <= N; i++) {
//		if (!visit[i]) {
//			visit[i] = true;
//			dfs(i);
//			answer++;
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}