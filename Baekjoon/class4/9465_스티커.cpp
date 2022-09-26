#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		int N; cin >> N;
		vector<vector<int>> list(2);
		for (int k = 0; k < 2; k++) {
			for (int i = 0; i < N; i++) {
				int a; cin >> a;
				list[k].push_back(a);
			}
		}
		vector<vector<int>> answer(list.begin(), list.end());
		for (int i = 1; i < N; i++) {
			answer[0][i] = answer[1][i - 1] + list[0][i];
			answer[1][i] = answer[0][i - 1] + list[1][i];
			if (i > 1) {
				answer[0][i] = max(answer[0][i], answer[1][i - 2] + list[0][i]);
				answer[1][i] = max(answer[1][i], answer[0][i - 2] + list[1][i]);
			}
			//cout << answer[0][i] << " " << answer[1][i] << endl;
		}
		cout << max(answer[0][N - 1], answer[1][N - 1]) << endl;
	}
	return 0;
}
