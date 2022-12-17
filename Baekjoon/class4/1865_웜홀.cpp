#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> costs;
int N, M, W;

bool checkCan() {
	int dist[501] = { 0 };
	for (int i = 1; i <= N; i++) {
		for (auto cost : costs) {
			if (dist[cost[1]] > dist[cost[0]] + cost[2]) {
				dist[cost[1]] = dist[cost[0]] + cost[2];
			}
		}
	}
	for (auto cost : costs) {
		if (dist[cost[0]] + cost[2] < dist[cost[1]]) {
			return true;
		}
	}
	return false;
}

int main() {
	int T; cin >> T;
	for (int t = 0; t < T; t++) {
		costs.clear();
		cin >> N >> M >> W;
		for (int i = 0; i < M; i++) {
			int a, b, c; cin >> a >> b >> c;
			costs.push_back({ a,b,c });
			costs.push_back({ b,a,c });
		}
		for (int i = 0; i < W; i++) {
			int a, b, c; cin >> a >> b >> c;
			costs.push_back({a,b, c*-1});
		}
		if (checkCan()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
