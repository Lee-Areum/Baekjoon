#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#define MAX 50000000
using namespace std;
int N, M;

int main() {
	cin >> N >> M;
	vector<vector<int>> board(N+1,vector<int>(N+1,MAX));
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (board[a][b] == 0 || board[a][b] > c) {
			board[a][b] = c;
		}
	}
	bool change = true;
	while (change) {
		change = false;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (i == j) continue;
				for (int k = 1; k <= N; k++) {
					if (i == k || j == k) continue;
					if (board[i][j] > board[i][k] + board[k][j]) {
						change = true;
						board[i][j] = board[i][k] + board[k][j];
					}
				}
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= N; k++) {
			if (board[i][k] == MAX) {
				board[i][k] = 0;
			}
			cout << board[i][k] << " ";
		}
		cout << "\n";
	}
	return 0;
}
