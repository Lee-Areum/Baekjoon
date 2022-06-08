//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stdio.h>
//using namespace std;
//
//int x[] = { -1,0,1,0 };
//int y[] = { 0,-1,0,1 };
//vector<vector<int>> board;
//bool visit[101][101] = { false };
//int N, M;
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		vector<int> tmp;
//		for (int k = 0; k < M; k++) {
//			int n; scanf("%1d", &n);
//			tmp.push_back((n == 0) ? 0 : 20000);
//		}
//		board.push_back(tmp);
//	}
//	board[0][0] = 1;
//	queue<pair<int, int>> q;
//	q.push({ 0,0 });
//	while (!q.empty()) {
//		pair<int, int> now = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			pair<int, int> next = { now.first + y[i],now.second + x[i] };
//			if (0 <= next.first && next.first < N && 0 <= next.second && next.second < M) {
//				if (!visit[next.first][next.second]) {
//					if (board[now.first][now.second] + 1 <= board[next.first][next.second]) {
//						board[next.first][next.second] = board[now.first][now.second] + 1;
//						visit[next.first][now.second] = true;
//						q.push(next);
//					}
//				}
//			}
//		}
//	}
//	cout << board[N - 1][M - 1] << endl;
//	return 0;
//}