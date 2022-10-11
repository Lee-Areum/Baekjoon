#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <queue>
using namespace std;
vector<pair<int, int>> V[1001];
vector<int> dist;

int N, M, x;
void Dijstara(int start) {
	dist = vector<int>(N + 1, INT_MAX);

	priority_queue<pair<int, int>> pq;
	dist[start] = 0;
	pq.push({ 0,start });

	while (!pq.empty()) {
		int cost = -pq.top().first;
		int cur = pq.top().second; 
		pq.pop();
		for (int i = 0; i < V[cur].size(); i++) {
			int next = V[cur][i].first; //연결된 거리
			int nCost = V[cur][i].second; //최단 거리

			if (dist[next] > cost + nCost) {
				dist[next] = cost + nCost;
				pq.push({-dist[next],next });
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M >> x;
	for (int i = 0; i < M; i++) {
		int a, b, c; cin >> a >> b >> c;
		V[a].push_back({ b,c });
	}
	int rest[1001];
	for (int i = 1; i <= N; i++) {
		Dijstara(i);
		rest[i] = dist[x];
	}
	Dijstara(x);
	for (int i = 1; i <= N; i++) {
		rest[i] += dist[i];
	}
	sort(rest + 1, rest + N + 1);
	int answer = rest[N];
	cout << answer << "\n";
	return 0;
}
