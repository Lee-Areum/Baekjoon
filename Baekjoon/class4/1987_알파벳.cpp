#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int R, C;
vector<string> board;
map<char, bool> m;
vector<vector<bool>> visited;
int maxCnt = 0;
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
void solution(int x, int y, int cnt) {
	if (maxCnt < cnt) {
		maxCnt = cnt;
	}
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx >= 0 && xx < R && yy >= 0 && yy < C && !visited[xx][yy]) {
			if (!m[board[xx][yy]]) {
				m[board[xx][yy]] = true;
				visited[xx][yy] = true;
				solution(xx, yy, cnt + 1);
				visited[xx][yy] = false;
				m[board[xx][yy]] = false;
			}
		}
	}
}

int main() {
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		string str; cin >> str;
		board.push_back(str);
		visited.push_back(vector<bool>(C, false));
	}
	m[board[0][0]] = true;
	solution(0, 0, 1);
	cout << maxCnt << "\n";
	return 0;
}
