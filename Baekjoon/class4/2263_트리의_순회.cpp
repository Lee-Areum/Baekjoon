#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> ino,posto;

void pre(int left, int right, int postStart, int postEnd) {
	if (left > right || postStart > postEnd) return;
	if (left == right) {
		cout << ino[left] << " ";
		return;
	}
	int mid = find(ino.begin(), ino.end(), posto[postEnd]) - ino.begin();
	int leftSize = postStart + (mid - left) - 1;
	cout << ino[mid] << " ";
	pre(left, mid - 1,postStart, leftSize);
	pre(mid+1, right, leftSize+1,postEnd-1);
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		ino.push_back(n);
	}
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		posto.push_back(n);
	}
	pre(0, N - 1, 0, N - 1);
	return 0;
}
