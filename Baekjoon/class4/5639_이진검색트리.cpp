#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector<int> pre;

void postOrder(int preL, int preR) {
	if (preL >= preR) {
		if (preL == preR) {
			cout << pre[preL] << "\n";
		}
		return;
	}
	int right = preL + 1;
	for (; right <= preR && pre[right] < pre[preL]; right++);
	postOrder(preL + 1, right - 1);
	postOrder(right, preR);
	cout << pre[preL] << "\n";
}

int main() {
	int n;
	while (cin >> n) {
		if (n == EOF) break;
		pre.push_back(n);
	}
	postOrder(0, pre.size() - 1);
	return 0;
}
