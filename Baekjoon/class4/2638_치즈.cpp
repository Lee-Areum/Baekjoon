#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
vector<vector<int>> board;
vector<vector<int>> visited; //바깥공기인지 확인
bool Melt() {
	bool flag = false;
	vector<vector<int>> cheese(N, vector<int>(M, 0));
	for (int i = 1; i < N - 1; i++) {
		for (int k = 1; k < M - 1; k++) {
			if (board[i][k]) {
				flag = true;
				int count = 0;
				for (int j = 0; j < 4; j++) {
					if (count >= 2) continue;
					int xx = i + dx[j];
					int yy = k + dy[j];
					if (0 <= xx && xx < N && 0 <= yy && yy < M && board[xx][yy] == 0 && visited[xx][yy] == 1) {
						count++;
					}
				}
				if (count >= 2) {
					cheese[i][k] = 0;
				}
				else {
					cheese[i][k] = 1;
				}
			}
		}
	}
	board = cheese;
	return flag;
}

int check(int x, int y) {
	if (visited[x][y] > 0) {
		return visited[x][y];
	}
	if (board[x][y] == 1) {
		return 2;
	}
	for (int i = 0; i < 4; i++) {
		if (visited[x][y] == 1) break;
		int xx = x + dx[i];
		int yy = y + dy[i];
		visited[x][y] = check(xx, yy);
	}
	return visited[x][y];
}

void checkOut() {
	visited = vector<vector<int>>(N, vector<int>(M, 0)); //1 : 바깥공기 2: 안쪽 공기
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		visited[i][0] = 1;
		visited[i][M - 1] = 1;
		q.push({ i,0 });
		q.push({ i,M - 1 });
	}
	for (int i = 0; i < M; i++) {
		visited[0][i] = 1;
		visited[N - 1][i] = 1;
		q.push({ 0,i });
		q.push({ N-1,i });
	}
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int i = 0; i < 4; i++) {
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (0 <= xx && xx < N && 0 <= yy && yy < M && board[xx][yy] == 0 && visited[xx][yy] == 0) {
				visited[xx][yy] = 1;
				q.push({ xx,yy });
			}
		}
	}
}

int main() {
	cin >> N >> M;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		vector<int> list;
		for (int k = 0; k < M; k++) {
			int n; cin >> n;
			list.push_back(n);
		}
		board.push_back(list);
	}
	while (true) {
		checkOut();
		if (!Melt()) break;
		answer++;
	}
	cout << answer << endl;
	return 0;
}
