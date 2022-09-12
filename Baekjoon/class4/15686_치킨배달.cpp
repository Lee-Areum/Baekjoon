#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

vector<pair<int,int>> chicken, house;
int N, M;
int minChicken = INT_MAX;

void getCount(vector<int> chosen) {
	int sumDif = 0;
	for (auto now : house) {
		if (sumDif >= minChicken) return;
		int minDif = INT_MAX;
		for (int n : chosen) {
			pair<int, int> chi = chicken[n];
			int dif = abs(now.first - chi.first) + abs(now.second - chi.second);
			minDif = min(dif, minDif);
		}
		sumDif += minDif;
	}
	minChicken = min(minChicken, sumDif);
}

void choose(int index, int count, vector<int> chosen) {
	if (count == M) {
		getCount(chosen);
		return;
	}
	if (index == chicken.size()) return;
	choose(index + 1, count, chosen);
	chosen.push_back(index);
	choose(index + 1, count + 1, chosen);
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			int n; cin >> n;
			if (n == 2) {
				chicken.push_back({ i,k });
			}
			else if (n == 1) {
				house.push_back({ i,k });
			}
		}
	}
	choose(0, 0, {});
	cout << minChicken << endl;
	return 0;
}
