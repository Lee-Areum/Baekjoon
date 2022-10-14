#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <limits.h>
using namespace std;

int main() {
	int n, m, r; cin >> n >> m >> r;
	vector<int> list;
	for (int i = 0; i < n; i++) {
		int input; cin >> input;
		list.push_back(input);
	}
	vector<vector<pair<int, int>>> connect(n + 1); //b, 거리
	for (int i = 0; i < r; i++) {
		int a, b, l; cin >> a >> b >> l;
		connect[a].push_back({ b,l });
		connect[b].push_back({ a,l });
	}
	int bestItem = 0;
	for (int i = 1; i <= n; i++) {
		vector<int> cost(n + 1, INT_MAX);
		queue<int> q;
		q.push(i);
		cost[i] = 0;
		while (!q.empty()) {
			int start = q.front(); q.pop();
			for (auto p : connect[start]) {
				if (cost[p.first] > cost[start] + p.second) {
					cost[p.first] = cost[start] + p.second;
					q.push(p.first);
				}
			}
		}
		int items = 0;
		for (int k = 0; k < cost.size(); k++) {
			if (cost[k] <= m) {
				items += list[k - 1];
			}
		}
		bestItem = max(bestItem, items);
	}
	cout << bestItem << endl;
	return 0;
}
