#include <iostream>
#include <vector>

using namespace std;

int N, best = 0;
vector<int> best_list;

int main() {
	cin >> N;
	int low, high;
	low = (N * 3 / 5) < 1?1: (N * 3 / 5);
	high = (N * 2 / 3) < 1 ? 1 : (N * 2 / 3);
	//cout << "low : " << low << "high : " << high << endl;
	
	for (int x = low; x <= high; x++) {
		vector<int> list = {N,x};
		int now = 1 , count = 2;
		while ((list[now-1] - list[now]) >= 0) {
			list.push_back(list[now - 1] - list[now]);
			count++; now++;
		}
		if (best < count) {
			best = count;
			best_list.clear();
			best_list.assign(list.begin(), list.end());
		}
	}
	cout << best << endl;
	for (int b : best_list) {
		cout << b << " ";
	}
	cout << endl;
	return 0;
}