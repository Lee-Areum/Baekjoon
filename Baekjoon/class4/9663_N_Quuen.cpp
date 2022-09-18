#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int answer = 0;
int N;
void nQueen(int index, vector<pair<int,int>> &list) {
	if (index == N) {
		answer++;
		return;
	}
	for (int i = 0; i < N; i++) {
		bool can = true;
		for (int k = 0; k < list.size(); k++) {
			pair<int, int> before = list[k];
			if (before.first == index || before.second == i
				|| abs(before.first - index) == abs(before.second - i)) {
				can = false;
				break;
			}
		}
		if (can) {
			vector<pair<int, int>> tmp(list.begin(), list.end());
			tmp.push_back({ index,i });
			nQueen(index + 1, tmp);
		}
	}
}

int main() {
	cin >> N;
	vector<pair<int, int>> tmp;
	nQueen(0, tmp);
	cout << answer << endl;
	return 0;
}
