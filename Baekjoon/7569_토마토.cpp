#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
	int N, M, H; cin >> N >> M >> H;
	int board[101][101][101];
	queue<vector<int>> q;
	bool visited[101][101][101] = { false };
	for (int i = 0; i < H; i++) {
		for (int k = 0; k < M; k++) {
			for (int t = 0; t < N; t++) {
				cin >> board[i][k][t];
				if (board[i][k][t] == 1) {
					q.push({ i,k,t });
					visited[i][k][t] = true;
				}
			}
		}
	}
	int x[] = { 0,1,-1,0,0,0 };
	int y[] = { 1,0,0,-1,0,0 };
	int z[] = { 0,0,0,0,-1,1 };
	while (!q.empty()) {
		vector<int> now = q.front();
		q.pop();
		for (int j = 0; j < 6; j++) {
			int zz = now[0] + z[j];
			int xx = now[1] + x[j];
			int yy = now[2] + y[j];
			if (0 <= zz && zz < H && 0 <= xx && xx < M && 0 <= yy && yy < N) {
				if (!visited[zz][xx][yy])
				{
					if (board[zz][xx][yy] == 0 || board[zz][xx][yy] >= board[now[0]][now[1]][now[2]] + 1) {
						board[zz][xx][yy] = board[now[0]][now[1]][now[2]] + 1;
						q.push({ zz,xx,yy });
						visited[zz][xx][yy] = true;
					}
				}
			}
		}
	}
	int maxest = 0;
	for (int i = 0; i < H; i++) {
		for (int k = 0; k < M; k++) {
			for (int t = 0; t < N; t++) {
				if (board[i][k][t] == 0) {
					cout << -1 << endl;
					return 0;
				}
				//cout << board[i][k][t] << " ";
				maxest = max(maxest, board[i][k][t]);
			}
			//cout << endl;
		}
		//cout << endl;
	}
	cout << maxest - 1 << endl;
	return 0;
}
