#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int N, M;
vector<int> parent;

int getParent(int n) {
	if (n == parent[n]) {
		return n;
	}
	return getParent(parent[n]);
}

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N >> M;
		parent.clear();
		for (int i = 0; i <= N; i++) {
			parent.push_back(i);
		}
		for (int i = 0; i < M; i++) {
			int a, b; cin >> a >> b;
			int p1 = getParent(a), p2 = getParent(b);
			if (p1 != p2) parent[p1] = p2;
		}
		set<int> sets;
		for (int i = 1; i <= N; i++) {
			sets.insert(getParent(i));
		}
		cout << "#" << t << " " << sets.size() << "\n";
	}
	return 0;
}
