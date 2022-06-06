//#include <iostream>
//#define MAX 1000001;
//using namespace std;
//
//int dp[1000001] = { 0,0,1,1 };
//
//int main() {
//	int N; cin >> N;
//	for (int i = 4; i <= N; i++) {
//		int three, two, one = dp[i-1]+1;
//		three = (i % 3 == 0) ? dp[i / 3] +1 : MAX;
//		two = (i % 2 == 0) ? dp[i / 2]+1 : MAX;
//		dp[i] = min(three, min(two, one));
//	}
//	cout << dp[N] << endl;
//}