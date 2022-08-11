#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <cstring>
using namespace std;

int N, M;
vector<vector<int>> board;
bool visited[501][501] = { false };
int maxSum = 0;
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };

int checkRest(int i, int k) {
	int result = 0;
	if (i < N - 1 && k < M - 2) {
		int sum = board[i][k] + board[i][k + 1] + board[i][k + 2] + board[i + 1][k + 1];
		result = max(sum, result);
	}
	if (i<N-2 && k>0) {
		int sum = board[i][k] + board[i + 1][k] + board[i + 2][k] + board[i + 1][k - 1];
		result = max(sum, result);
	}
	if (i > 0 && k < M-2) {
		int sum = board[i][k] + board[i][k + 1] + board[i][k + 2] + board[i - 1][k + 1];
		result = max(sum, result);
	}
	if (i < N-2 && k < M-1) {
		int sum = board[i][k] + board[i + 1][k] + board[i + 2][k] + board[i + 1][k + 1];
		result = max(sum, result);
	}
	return result;
}

void DFS(int x, int y, int cnt, int sum) {
	visited[x][y] = true;
	//cout << x << " " << y << " " << cnt << " " << sum << endl;

	if (cnt == 3) {
		//cout << x << " " <<y << " " << cnt << " " << sum << endl;
		maxSum = max(maxSum, sum);
		//cout << "maxSum : " << maxSum <<"\n" << endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (0 <= xx && xx < N && 0 <= yy && yy < M) {
			if (!visited[xx][yy]) {
				DFS( xx,yy,cnt + 1,sum + board[xx][yy]);
				visited[xx][yy] = false;
			}
		}
	}

}

int main() { cin >> N >> M;
	for (int i = 0; i < N; i++) {
		vector<int> tmp;
		for (int k = 0; k < M; k++) {
			int n; cin >> n;
			tmp.push_back(n);
		}
		board.push_back(tmp);
	}
	for (int i = 0; i < N; i++) { 
		for (int k = 0; k < M; k++) {
			maxSum = max(maxSum,checkRest(i, k));//ㅗ확인
			//ㅗ제외 확인
			DFS(i, k, 0, board[i][k]);
			visited[i][k] = false;
		}
	}
	cout << maxSum << endl;
}
