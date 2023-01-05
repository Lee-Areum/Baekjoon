#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> list;

int search(int left, int right, int n) {
	while (left < right) {
		int mid = (left + right) / 2;
		if (list[mid] < n) {
			left = mid + 1;
		}
		else {
			right = mid;
		}

	}
	return right;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		if (list.empty() || n > list[list.size() - 1]) {
			list.push_back(n);
		}
		else {
			int idx = search(0, list.size() - 1, n);
			list[idx] = n;
		}
	}
	cout << list.size() << endl;
	return 0;
}
