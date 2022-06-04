//#include <iostream>
//using namespace std;
//
//bool sosu(int n) {
//	if (n < 2) return false;
//	for (int i = 2; i*i<=n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int N, M; cin >> N >> M;
//	for (int i = N; i <= M; i++) {
//		if (sosu(i)) {
//			cout << i << "\n";
//		}
//	}
//	return 0;
//}