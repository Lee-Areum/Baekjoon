//https://www.acmicpc.net/problem/1010
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T;
int N, M;


long long Solution() {
	long long dp[31][31] = { 0 };
	for (int i = 1; i <= 30; i++) {
		dp[i][i] = 1;
		dp[1][i] = i;
	}
	for (int i = 2; i <= N; i++) {
		for (int k = 1; k <= abs(N - M); k++) {
			dp[i][i + k] = dp[i - 1][i + k - 1] + dp[i][i + k - 1];
		}
	}

	return dp[N][M];
}

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		cout << Solution() << "\n";
	}
	return 0;
}
