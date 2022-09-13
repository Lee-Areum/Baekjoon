#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<int> sets;

void solution(vector<int> list, int index, int count) {
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << list[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = index; i < sets.size(); i++) {
		vector<int> tmp(list.begin(), list.end());
		tmp.push_back(sets[i]);
		solution(tmp, i, count + 1);
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		sets.push_back(n);
	}
	sort(sets.begin(), sets.end());
	sets.erase(unique(sets.begin(), sets.end()), sets.end());
	solution({}, 0, 0);
	return 0;
}
