//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int togo[101] = { 0 };
//int d[101] = { 0 };
//int main() {
//	int N, M; cin >> N >> M;
//	for (int i = 0; i < N + M; i++) {
//		int u, v; cin >> u >> v;
//		togo[u] = v;
//	}
//	queue<int> q; q.push(1);
//	while (!q.empty()) {
//		int n = q.front();
//		q.pop();
//		for (int i = 1; i <= 6; i++) {
//			int next = n + i;
//			if (next > 100) break;
//			if (togo[next] > 0) {
//				next = togo[next];
//			}
//			if (d[next] == 0) {
//				d[next] = d[n] + 1;
//				q.push(next);
//			}
//		}
//	}
//	cout << d[100] << endl;
//	return 0;
//}