//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//vector<set<string>> dp(15);
//
//int main() {
//	dp[1] = { "1" };
//	dp[2] = { "11","2" };
//	dp[3] = { "111","12","21","3" };
//	for (int i = 4; i < 11; i++) {
//		for (int k = 1; k <= i/2; k++) {
//			for (string s1 : dp[k]) {
//				for (string s2 : dp[i - k]) {
//					dp[i].insert(s1 + s2);
//					dp[i].insert(s2 + s1);
//				}
//			}
//		}
//	}
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		int N; cin >> N;
//		cout << dp[N].size() << "\n";
//	}
//	return 0;
//}