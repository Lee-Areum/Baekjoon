#include <iostream>
using namespace std;

int dp[1025][1025] = { 0 };
int input[1025][1025] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= N; k++) {
			cin >> input[i][k];
			dp[i][k] = input[i][k] + dp[i - 1][k] + dp[i][k - 1] - dp[i - 1][k - 1];

		}
	}
	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		int num = dp[x2][y2] + dp[x1 - 1][y1 - 1] - dp[x2][y1 - 1] - dp[x1 - 1][y2];
		cout << num << "\n";
	}
	return 0;
}
