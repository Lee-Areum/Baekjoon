#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N; cin >> N;
	vector<int> maximum(N + 1, 0);
	vector<vector<int>> list;
	for (int i = 0; i < N; i++) {
		vector<int> tmp;
		for (int k = 0; k <= i; k++) {
			int n; cin >> n;
			tmp.push_back(n);
		}
		tmp.push_back(0);
		list.push_back(tmp);
	}
	list.push_back(vector<int>(N+1, 0));
	for (int i = 0; i < N; i++) {
		vector<int> tmp(N+1,0);
		for (int k = 0; k <= i;k++) {
			int sum = maximum[k] + list[i][k];
			tmp[k] = max(tmp[k], sum);
			sum = maximum[k] + list[i][k + 1];
			tmp[k + 1] = max(tmp[k + 1], sum);
		}
		maximum = tmp;
	}
	cout << *max_element(maximum.begin(), maximum.end()) << endl;
	return 0;
}
