#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int roop; cin >> roop;
	for (int r = 0; r < roop; r++) {
		int a, b; cin >> a >> b;
		bool visited[10000] = { false };
		queue<pair<int, string>> q;
		q.push({ a ,"" });
		visited[a] = true;
		string answer = "";
		while (!q.empty()) {
			pair<int, string> now = q.front();
			q.pop();
			visited[now.first] = true;
			if (now.first == b) {
				cout << now.second << endl;
				break;
			}

			//S
			int next = now.first - 1;
			if (now.first == 0) next = 9999;
			if (!visited[next]) {
				q.push({ next,now.second + "S" });
				visited[next] = true;
			}
			//L
			int d1 = now.first / 1000;
			int rest = now.first % 1000;
			next = rest * 10 + d1;
			if (!visited[next]) {
				q.push({ next,now.second + "L" });
				visited[next] = true;
			}
			//R
			int d4 = now.first % 10;
			rest = now.first / 10;
			next = d4 * 1000+rest;
			if (!visited[next]) {
				q.push({ next,now.second + "R" });
				visited[next] = true;
			}
			//D
			next = now.first * 2;
			if (next > 9999) next %= 10000;
			if (!visited[next]) {
				q.push({ next, now.second + "D" });
				visited[next] = true;
			}
		}
	}
}
