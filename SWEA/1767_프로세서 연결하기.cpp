#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
int N;
vector<pair<int, int>> cores;
int maxCore = 0; int minCost = 0;
void solution(int index, int count, int cost, vector<vector<int>> &field) {
	if (index == N) {
		if (count > maxCore) {
			maxCore = count;
			minCost = cost;
		}
		else if (count == maxCore) {
			minCost = min(minCost, cost);
		}
		return;
	}
	int x = cores[index].first, y = cores[index].second;
	if (x == 0 || x == N - 1 || y == 0 || y == N - 1) { //벽에 붙어있는 경우
		solution(index+1, count + 1, cost, field);
		return;
	}
	bool notCanGo = true;
	for (int i = 0; i < 4; i++) {
		vector<vector<int>> tmp(field.begin(), field.end());
		int xx = x, yy = y;
		bool stop = false;
		int sum = 0;
		while (true) {
			xx += dx[i]; yy += dy[i];
			if (xx < 0 || xx >= N || yy < 0 || yy >= N) {
				break;
			}
			if (tmp[xx][yy] > 0) {
				stop = true;
				break;
			}
			tmp[xx][yy] = 2;
			sum++;
		}
		if (stop) {
			continue;
		}
		solution(index + 1, count + 1, cost + sum, tmp); 
		notCanGo = false;
	}
	if (notCanGo) {
		solution(index + 1, count, cost, field);
	}
}

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		maxCore = 0;
		cores.clear();
		vector<vector<int>> board;
		for (int i = 0; i < N; i++) {
			vector<int> list;
			for (int k = 0; k < N; k++) {
				int n; cin >> n;
				list.push_back(n);
				if (n == 1) cores.push_back({ i,k });
			}
			board.push_back(list);
		}
		solution(0, 0, 0, board);
		cout << "#" << t << " " << minCost << "\n";
	}
}
