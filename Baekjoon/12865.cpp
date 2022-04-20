/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, C;
int K[200][100002] = { 0 };

int main() {
	cin >> N >> C;
	for (int i = 1; i <= N; i++) {
		int W, V;
		cin >> W >> V;
		for (int k = 1; k <= C; k++) {
			if (W > k) {
				K[i][k] = K[i - 1][k];
			}
			else {
				K[i][k] = max(K[i - 1][k], K[i - 1][k - W] + V);
			}
		}
	}
	cout << K[N][C] << endl;
}*/