#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N; cin >> N;
	vector<int> list;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		list.push_back(n);
	}
	int count[20000] = { 0 };
	int answer = 0;
	for (int i = N - 1; i >= 0; i--) {
		count[i] = 1;
		for (int k = i + 1; k < N; k++) {
			if (list[k] > list[i]) {
				count[i] = max(count[i], count[k] + 1);
			}
		}
		answer = max(answer, count[i]);
	}
	cout << answer << endl;
	return 0;
}
