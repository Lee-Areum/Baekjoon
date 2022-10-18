#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b) {
	if (b == 0) return a;
	return GCD(b,a%b);
}

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		int A, B; cin >> A >> B;
		int gcd = GCD(max(A, B), min(A, B));
		int result = A * B / gcd;
		cout << result << endl;
	}
	return 0;
}
