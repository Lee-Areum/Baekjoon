//#include <iostream>
//using namespace std;
//
//int gdb(int a, int b) {
//	if (b == 0) {
//		return a;
//	}
//	return gdb(b, a % b);
//}
//
//int main() {
//	int n1, n2; cin >> n1 >> n2;
//	int num = gdb(max(n1, n2), min(n1, n2));
//	cout << num << endl;
//	cout << n1 * n2 / num << endl;
//	return 0;
//}