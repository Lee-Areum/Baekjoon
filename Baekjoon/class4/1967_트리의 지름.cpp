#include <iostream>
#include <vector>
using namespace std;

int max_cost = 0;
int max_n = 0;
vector<bool> visited;

int N;
vector<vector<pair<int, int>>> child,parent; //자식 -> 부모
void dfs(int start,int cost,bool type) {
	visited[start] = true;
	if (max_cost < cost) {
		max_cost = cost;
		max_n = start;
	}
	//처음
	for (pair<int, int> p : parent[start]) {
		if (!visited[p.first]) {
			dfs(p.first, cost + p.second, type);
			visited[p.first] = true;
		}
	}
	if(!type) {
		for (pair<int, int> p : child[start]) {
			if (!visited[p.first]) {
				dfs(p.first, cost + p.second, type);
				visited[p.first] = true;
			}
		}

	}
}

int main() {
	cin >> N;
	child = vector<vector<pair<int, int>>>(N + 1);
	parent = vector<vector<pair<int, int>>>(N + 1);
	visited = vector<bool>(10001);
	for (int i = 1; i < N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		child[b].push_back({ a,c });
		parent[a].push_back({ b,c });
	}
	dfs(1, 0,true);
	visited.clear();
	visited = vector<bool>(10001);
	max_cost = 0;

	dfs(max_n, 0,false);
	cout << max_cost << endl;
	return 0;
}
