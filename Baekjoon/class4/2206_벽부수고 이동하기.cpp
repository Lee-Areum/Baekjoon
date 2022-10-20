#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string>
#include <queue>

using namespace std;

int N, M;
vector<string> board;
int dx[] = { 0,1,-1,0 };
int dy[] = { 1,0,0,-1 };
int visited[1001][1001][2] = { 0 };

int solution() {
	int x = 0, y = 0;
	queue<vector<int>> q; //x,y,wall,cnt
	q.push({ x,y,0});
	visited[x][y][0] = 1;
	while (!q.empty()) {
		x = q.front()[0]; y = q.front()[1];
		int wall = q.front()[2];
		q.pop();
		if (x == N - 1 && y == M - 1) { //탈출조건
			return visited[x][y][wall];
		}
		for (int i = 0; i < 4; i++) {
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (0 <= xx && xx < N && 0 <= yy && yy < M) {
				if (board[xx][yy] == '1' && !wall) {
					visited[xx][yy][wall + 1] = visited[x][y][wall] + 1;
					q.push({ xx,yy,1});
				}
				if(board[xx][yy] == '0' && visited[xx][yy][wall]==0){
					visited[xx][yy][wall] = visited[x][y][wall]+1;
					q.push({ xx,yy,wall});
				}
			}
		}
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		board.push_back(str);
	}
	int answer = solution();
	cout << answer << "\n";
	return 0;
}
