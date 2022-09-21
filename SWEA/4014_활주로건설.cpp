#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[] = { 0,1 }; //가로, 세로
int dy[] = { 1,0 };
vector<vector<int>> board; 
int N, X;

bool checkCan(int x, int y, int type) {
	bool visited[50][50] = { false };
	int xx = x, yy = y;
	while((type == 0 && yy < N-1) || (type == 1 && xx < N-1)) {
		xx += dx[type]; yy += dy[type];
		if (abs(board[x][y] - board[xx][yy]) > 1) 
			return false;
		if (abs(board[x][y] - board[xx][yy]) == 1) { //작아지는
			if (board[xx][yy] < board[x][y]) {
				if ((type == 0 && yy + X > N) || (type == 1 && xx + X > N))
					return false;
				visited[xx][yy] = true;
				for (int k = 1; k < X; k++) {
					x = xx, y = yy;
					xx += dx[type]; yy += dy[type];
					if (visited[xx][yy]|| board[xx][yy] != board[x][y])
						return false;
					else {
						visited[xx][yy] = true;
					}
				}
			}
			else { //커지는
				if ((type == 0 && yy<X)||(type == 1 && xx <X))
					return false;
				int tx = x, ty = y;
				visited[x][y] = true;
				for (int k = 1; k < X; k++) {
					tx -= dx[type]; ty -= dy[type];
					if (visited[tx][ty] || board[tx][ty] != board[x][y])
						return false;
					else {
						visited[tx][ty] = true;
					}
					x = tx; y = ty;
				}
			}
		}
		x = xx, y = yy;
	}
	return true;
}

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N >> X;
		board.clear();
		for (int i = 0; i < N; i++) {
			vector<int> list;
			for (int k = 0; k < N; k++) {
				int n; cin >> n;
				list.push_back(n);
			}
			board.push_back(list);
		}
		int answer = 0;
		for (int i = 0; i < N; i++) {
			if (checkCan(i, 0, 0)) { //가로
				answer++;
			}
			if (checkCan(0, i, 1)) { //세로
				answer++;
			}
		}
		cout << "#" << t << " " << answer << "\n";
	}
	return 0;
}
