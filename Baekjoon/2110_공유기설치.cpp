#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> list;

bool getCount(int minCost) {
	int answer = 1;
	int start = list[0];
	for (int i = 1; i < N; i++) {
		if (list[i] - start >= minCost) {
			answer++;
			start = list[i];
		}
	}
	return answer >= M;
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		list.push_back(n);
	}
	sort(list.begin(), list.end());
	int left = 1, right = list[N - 1];
	while (left < right) {
		int mid = (left + right) / 2;
		if (getCount(mid)) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	cout << left - 1 << endl;
	return 0;
}
