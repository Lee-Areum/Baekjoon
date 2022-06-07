//#include <iostream>
//
//using namespace std;
//int dp[1001] = {0,1,3};
//
//int main() {
//	int N; cin >> N;
//	for (int i = 3; i <= N; i++) {
//		dp[i] = (dp[i - 1] + (dp[i - 2])*2)%10007;
//	}
//	cout << dp[N] << endl;
//	return 0;
//}