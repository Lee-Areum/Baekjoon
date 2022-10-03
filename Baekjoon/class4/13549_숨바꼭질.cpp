#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

bool visited[100001] = { false };

int main() {
	int N, K; cin >> N >> K;
	queue<pair<int, int>> q; //x,cnt
	if (N > K) {
		cout << N - K << endl;
		return 0;
	}
	int answer = -1;
	q.push({ N,0 }); visited[N] = true;
	while (!q.empty())
	{
		pair<int, int> now = q.front(); q.pop();
		visited[now.first] = true;
		if (now.first == K) {
			answer = now.second;
			break;
		}
		if (now.first * 2 < 100001 && !visited[now.first * 2]) {
			q.push({ now.first * 2,now.second });
		}
		if (now.first > 0 && !visited[now.first - 1]) {
			q.push({ now.first - 1,now.second + 1 });
		}
		if (now.first < K && !visited[now.first + 1]) {
			q.push({ now.first + 1,now.second + 1 });
		}
	}
	cout << answer << endl;
	return 0;
}
