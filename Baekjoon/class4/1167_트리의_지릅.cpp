#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxCon = 0, maxNode = 0;
int N;
vector<vector<pair<int, int>>> connect(100001);
vector<bool> visited(1000001,false);
void getMaxCon(int n, int count) {
	if (count > maxCon) {
		maxCon = count;
		maxNode = n;
	}
	for (auto con : connect[n]) {
		if (!visited[con.first]) {
			visited[con.first] = true;
			getMaxCon(con.first, count + con.second);
			visited[con.first] = false;
		}
	}
}

int main(){
	cin >> N;
	for (int i = 0; i < N; i++) {
		int number; cin >> number;
		int n, m; cin >> n;
		while (n!=-1) {
			cin >> m;
			connect[number].push_back({ n,m });
			cin >> n;
		}
	}
	visited[1] = true;
	getMaxCon(1,0);
	visited[1] = false;
	visited[maxNode] = true;
	getMaxCon(maxNode, 0);
	cout << maxCon << endl;
	return 0;
}
