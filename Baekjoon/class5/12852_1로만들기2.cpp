#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int dp[1000001] = { 0 };
int main(){
	int N; cin >> N;
	queue<pair<vector<int>,vector<int>>> q; //n , cnt / 1,2,3,...
	q.push({ {N,0},{ } });
	int count = 0;
	vector<int> answer;
	while (!q.empty()) {
		vector<int> now = q.front().first;
		vector<int> list = q.front().second; q.pop();
		list.push_back(now[0]);
		if (now[0] < 1) continue;
		if (now[0] == 1) {
			count = now[1];
			answer = list;
			break;
		}
		if (now[0] % 3 == 0 && dp[now[0]/3] == 0) {
			q.push({ {now[0] / 3,now[1]+1},list });
			dp[now[0]/3] = now[1]+1;				
		}
		if (now[0] % 2 == 0 && dp[now[0]/2] == 0) {
			q.push({ {now[0] / 2,now[1] + 1},list });
			dp[now[0] / 2] = now[1] + 1;
		}
		if (dp[now[0] - 1] == 0) {
			q.push({ {now[0] -1,now[1] + 1},list });
			dp[now[0]-1] = now[1] + 1;
		}
	}
	cout << count << "\n";
	for (int i : answer) {
		cout << i << " ";
	}
	cout << "\n";
	return 0;
}
