//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int N; cin >> N;
//	vector<int> list, dp;
//	for (int i = 0; i < N; i++) {
//		int n; cin >> n;
//		list.push_back(n);
//		dp.push_back(n);
//	}
//	dp[1] += list[0];
//	dp[2] += max(list[0], list[1]);
//	for (int i = 3; i < N; i++) {
//		dp[i] += max(dp[i - 2], dp[i - 3] + list[i - 1]);
//	}
//	cout << dp[N - 1] << endl;
//	return 0;
//}