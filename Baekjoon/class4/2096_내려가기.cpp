#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main() {
	int N, M = 3; cin >> N;
	int minDP[3] = { 0 }, maxDP[3] = { 0 };
	for (int i = 0; i < M; i++) {
		int n; cin >> n;
		minDP[i] = n;
		maxDP[i] = n;
	}
	int input[3];
	for (int i = 1; i < N; i++) {
		cin>>input[0]>>input[1]>>input[2];
		int tmp0 = maxDP[0], tmp2 = maxDP[2];
		maxDP[0] = max(maxDP[0], maxDP[1]) + input[0];
		maxDP[2] = max(maxDP[2], maxDP[1]) + input[2];
		maxDP[1] = max(max(tmp0, maxDP[1]), tmp2) + input[1];

		tmp0 = minDP[0]; tmp2 = minDP[2];
		minDP[0] = min(minDP[0], minDP[1]) + input[0];
		minDP[2] = min(minDP[2], minDP[1]) + input[2];
		minDP[1] = min(min(tmp0, minDP[1]), tmp2) + input[1];
	}
	int maxAns = max(max(maxDP[0], maxDP[1]), maxDP[2]);
	int minAns = min(min(minDP[0], minDP[1]), minDP[2]);
	cout << maxAns << " " << minAns << "\n";
	return 0;
}
