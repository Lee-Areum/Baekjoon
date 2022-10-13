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
	int Maxcount[20000] = { 0 };
	int Mincount[20000] = { 0 };
	int answer = 0;
	for (int i = N - 1; i >= 0; i--) {
		Maxcount[i] = 1;
		for (int k = N - 1; k >= i; k--)  {
			if (list[k] < list[i]) { //커지는
				Maxcount[i] = max(Maxcount[i], Maxcount[k] + 1);
			}
		}
	}
	for (int i = 0; i < N; i++) {
		Mincount[i] = 1;
		for (int k = 0; k < i; k++) {
			if (list[k] < list[i]) { //작아지는
				Mincount[i] = max(Mincount[i], Mincount[k] + 1);
			}
		}
		answer = max(answer, Maxcount[i] + Mincount[i]-1);
		//cout << Maxcount[i] << " + " << Mincount[i] << endl;
	}
	cout << answer << endl;
	return 0;
}
