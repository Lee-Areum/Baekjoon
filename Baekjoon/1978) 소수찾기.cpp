//#include <iostream>
//using namespace std;
//
//bool sosu(int n) {
//	if (n < 2) return false;
//	for (int k = 2; k <= n / 2; k++) {
//		if (n % k == 0) return false;
//	}
//	return true;
//}
//int main() {
//	int N; cin >> N;
//	int answer = 0;
//	for (int i = 0; i < N; i++) {
//		int n; cin >> n;
//		answer += (sosu(n)) ? 1 : 0;
//	}
//	cout << answer << endl;
//	return 0;
//}