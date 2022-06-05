//#include <iostream>
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	int two = 0, five = 0;
//	for (int i = 2; i <= N; i++) {
//		int n = i;
//		while (n % 2 == 0) {
//			two++;
//			n /= 2;
//		}
//		n = i;
//		while (n % 5 == 0) {
//			five++;
//			n /= 5;
//		}
//	}
//	cout << min(two,five) << endl;
//	return 0;
//}