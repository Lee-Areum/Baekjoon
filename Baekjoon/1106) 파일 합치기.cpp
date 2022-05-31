//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//#include <limits.h>
//
//using namespace std;
//
//int main() {
//	int T; cin >> T;
//	for (int t = 1; t <= T; t++) {
//		int N; cin >> N;
//		int cost[502][502] = { 0 };
//		int sum[502] = { 0 };
//		vector<int> list = { 0 };
//		for (int i = 1; i <= N; i++) {
//			int n; cin >> n;
//			list.push_back(n);
//			sum[i] = sum[i - 1] + n;
//		}
//		for (int k = 1; k < N; k++) {
//			for (int i = 1; i <= N - k; i++) {
//				int j = i + k;
//				cost[i][j] = INT_MAX;
//				for (int f = i; f < j; f++) {
//					int temp = cost[i][f] + cost[f + 1][j] + sum[j] - sum[i - 1];
//					if (temp < cost[i][j]) {
//						cost[i][j] = temp;
//					}
//				}
//			}
//		}
//		cout << cost[1][N] << endl;
//	}
//	return 0;
//}