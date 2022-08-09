#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
	int INF = 100000;
	int connect[101][101] = { 0 };
	for (int i = 0; i <= N; i++) {
		for (int k = 0; k <= N; k++) {
			if (i != k) {
				connect[i][k] = INF;
			}
		}
	}
	for (int i = 0; i < M; i++) {
		int x, y; cin >> x >> y;
		connect[x][y] = 1;
		connect[y][x] = 1;
	}
	for (int i = 1; i <=N; i++) {
		for (int k = 1; k <= N; k++) {
			if (connect[i][k] < INF) {
				for (int f = 1; f <= N; f++) {
					if (i != f && i!=k && k!=f) {
						connect[i][f] = min(connect[i][f], connect[k][f] + connect[i][k]);
						connect[f][i] = connect[i][f];
					}
				}
			}
		}
	}
	int biggest = 0;
	vector<int> total = { INF };
	for (int i = 1; i <= N; i++) {
		int count = 0;
		for (int k = 1; k <= N; k++) {
			count += connect[i][k];
		}
		if (total[biggest] > count) {
			biggest = i;
		}
		total.push_back(count);
	}
	cout << biggest << endl;
	return 0;

}
