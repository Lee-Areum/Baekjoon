#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str1, str2; cin >> str1 >> str2;
	int N, M; N = str1.size(); M = str2.size();
	vector<vector<int>> board(N+1, vector<int>(M+1, 0));
	int maxNum = 0;
	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= M; k++) {
			if (str1[i - 1] == str2[k-1]) {
				board[i][k] = board[i - 1][k - 1] + 1;
			}
			else {
				board[i][k] = max(board[i - 1][k], board[i][k - 1]);
			}
		}
	}
	cout << board[N][M] << endl;
	return 0;
}
