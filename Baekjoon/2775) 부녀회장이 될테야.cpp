//#include <iostream>
//using namespace std;
//
//int apart[15][15] = { 0 };
//
//int main() {
//	for (int i = 1; i <= 14; i++) {
//		apart[0][i] = i;
//	}
//	for (int i = 1; i <= 14; i++) {
//		for (int k = 1; k <= 14; k++) {
//			apart[i][k] = apart[i-1][k] + apart[i][k - 1];
//		}
//	}
//	int T; cin >> T;
//	for (int t = 1; t <= T; t++) {
//		int K, N; cin >> K >> N;
//		cout << apart[K][N] << endl;
//	}
//	return 0;
//}