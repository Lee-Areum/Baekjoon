#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<int> board;
int list[10] = { 0 };
bool visited[10] = { false };

void Solution(int index) {
	if (index == M) {
		for (int i = 0; i < M; i++) {
			cout << list[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			list[index] = board[i];
			Solution(index + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		board.push_back(n);
	}
	sort(board.begin(), board.end());
	Solution(0);
}
