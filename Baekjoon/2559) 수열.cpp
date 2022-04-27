#include <iostream>
#include <vector>

using namespace std;
int N, K, biggest = -10000000;
vector<int> list;

void solution() {
	int num = 0, k = 0;
	for (int i = 0; i < K-1; i++) {
		num += list[i];
	}
	for (int i = K-1; i < N; i++) {
		num += list[i];
		if (num > biggest) {
			biggest = num;
		}
		num -= list[k++];
	}
	cout << biggest << endl;
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		list.push_back(n);
	}
	solution();
	return 0;
}