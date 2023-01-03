#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int INF = 987654321;
int dist[810] = { 0 };
vector<pair<int, int>> connect[810];
int N, E;

void getDistance(int start) {
	priority_queue<pair<int, int>> pq;
	for (int i = 0; i <= N; i++) {
		dist[i] = INF;
	}
	dist[start] = 0;
	pq.push({0,start});
	while (!pq.empty()) {
		int to = pq.top().second;
		int cost = pq.top().first * -1; pq.pop();
		if (cost > dist[to]) continue;
		for (pair<int, int> now : connect[to]) {
			if (dist[now.second] > cost + now.first) {
				dist[now.second] = cost + now.first;
				pq.push({ dist[now.second]*-1,now.second });
			}
		}
	}
}

int main() {
	cin >> N >> E;
	for (int i = 0; i < E; i++) {
		int a, b, c; cin >> a >> b >> c;
		connect[a].push_back({ c,b });
		connect[b].push_back({ c,a });
	}
	
	int v1, v2;
	bool flag1 = true, flag2 = true;
	cin >> v1 >> v2;

	getDistance(1);
	int cost1 = 0, cost2 = 0;
	if (dist[v1] == INF) flag1 = false;
	if (dist[v2] == INF) flag2 = false;
	cost1 += dist[v1];
	cost2 += dist[v2];

	getDistance(v1);
	if (dist[v2] == INF) {
		flag1 = flag2 = false;
	}
	cost1 += dist[v2];
	cost2 += dist[v2];

	getDistance(N);
	if (dist[v1] == INF) flag1 = false;
	if (dist[v2] == INF) flag2 = false;
	cost1 += dist[v2];
	cost2 += dist[v1];

	if (!flag1 && !flag2) {
		cout << -1 << endl;
		return 0;
	}
	if (!flag1) cost1 = INF;
	if (!flag2) cost2 = INF;
	cout << min(cost1, cost2) << endl;
	return 0;
}
