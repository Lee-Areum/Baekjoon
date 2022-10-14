#include <string>
#include <vector>
#include <algorithm>
#define INF 10000000

using namespace std;

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
	int answer = INF;
	vector<vector<int>> connect(n + 1, vector<int>(n + 1, INF));
	for (vector<int> list : fares) {
		connect[list[0]][list[1]] = list[2];
		connect[list[1]][list[0]] = list[2];
	}
	for (int i = 1; i <= n; i++) {
		connect[i][i] = 0;
		for (int k = 1; k <= n; k++) {
			for (int j = 1; j <= n; j++) {
				if (i == k || k == j || i == j) continue;
				connect[k][j] = min(connect[k][j], connect[k][i] + connect[i][j]);
			}
		}
	}

	for (int k = 1; k <= n; k++) {
		answer = min(answer, connect[s][k] + connect[k][a] + connect[k][b]);
	}
	answer = min(answer, connect[s][a] + connect[s][b]);

	return answer;
}
