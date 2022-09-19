#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <limits.h>
using namespace std;
int minTime = INT_MAX, minCount = 0;
int N, K;
bool visited[100001] = { false };

int main() {
	cin >> N >> K;
	queue<pair<int, int>> q; //time, x
	q.push({ 0,N }); visited[N] = true;
	while (!q.empty()) {
		pair<int, int> now = q.front(); q.pop();
		visited[now.second] = true;
		if (now.first > minTime) continue; //가지치기
		if (now.second == K) { //탈출조건
			if (minTime == now.first) {
				minCount++;
			}
			else if (minTime > now.first) {
				minTime = now.first;
				minCount = 1;
			}
			continue;
		}
		if (now.second < K && !visited[now.second+1]) { //+1
			q.push({ now.first + 1, now.second + 1 });
		}
		if (0 < now.second && !visited[now.second-1]) { //-1
			q.push({ now.first + 1, now.second - 1 });
		}
		if (now.second < K && now.second*2 < min(K*2, 100001) && !visited[now.second*2]) {
			q.push({ now.first + 1, now.second * 2 });
		}
	}
	cout << minTime << "\n" << minCount << "\n";
	return 0;
}
