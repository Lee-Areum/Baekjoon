//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main() {
//	vector<int> dp(1001);
//	dp[1] = 1; dp[2] = 2;
//	int N; cin >> N;
//	for (int i = 3; i <= N; i++) {
//		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
//	}
//	cout << dp[N]%10007 << "\n";
//	return 0;
//}