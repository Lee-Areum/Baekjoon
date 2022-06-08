//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	int N, r, c; cin >> N >> r >> c ;
//	int answer = 0;
//	while (N) {
//		int n, n_1;
//		n = pow(2, N); n_1 = pow(2, N - 1);
//		int index = (r / n_1) * 2 + (c / n_1);
//		answer += (n_1 * n_1) * index;
//		N -= 1;
//		r %= n_1;
//		c %= n_1;
//	}
//	cout << answer << endl;
//	return 0;
//}