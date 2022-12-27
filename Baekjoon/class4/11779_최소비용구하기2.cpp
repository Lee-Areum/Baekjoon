#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int MAX = 987654321;
int N, M;
vector<vector<pair<int,int>>> costs(1010);
int start, finish;
vector<int> Dist(1010,MAX);
int route[1010];

void input() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		costs[a].push_back({ b,c });
	}
	cin >> start >> finish;
}

void solution() {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0,start });
	Dist[start] = 0;
	while (!pq.empty()) {
		int cost = pq.top().first * -1;
		int now = pq.top().second;
		pq.pop();

		if (cost > Dist[now]) continue;

		for (pair<int, int> p : costs[now]) {
			int next = p.first;
			int nCost = p.second;
			if (Dist[next] > nCost + cost) {
				Dist[next] = nCost + cost;
				route[next] = now;
				pq.push({ Dist[next] * -1,next });
			}
		}
	}
	cout << Dist[finish] << "\n";
	vector<int> answer;
	int tmp = finish;
	while (tmp) {
		answer.push_back(tmp);
		tmp = route[tmp];
	}
	cout << answer.size() << "\n";
	for (int i = answer.size() - 1; i >= 0; i--) {
		cout << answer[i] << " ";
	}
	cout << "\n";	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	input();
	solution();

	return 0;
}
