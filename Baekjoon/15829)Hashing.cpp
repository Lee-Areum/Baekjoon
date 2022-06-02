//#include <iostream>
//#include <cmath>
//#include <string>
//#define mod 1234567891LL;
//using namespace std;
//int main() {
//	int N; cin >> N;
//	string str; cin >> str;
//	unsigned long hash = 0;
//	unsigned long mul = 1;
//	for (int i = 0; i < N; i++) {
//		long long tmp = (str[i] - 'a' + 1);
//		tmp *= mul;
//		tmp %= mod;
//		hash += tmp;
//		mul *= 31;
//		mul %= mod;
//	}
//	hash%=mod;
//	cout << hash << endl;
//	return 0;
//}