//#include <iostream>
//#include <string>
//#include <climits>
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	int count = 0;
//	for (int i = 666; i < INT_MAX; i++) {
//		string str = to_string(i);
//		for (int k = 0; k <= str.size()-3; k++) {
//			if (str[k] == '6' && str[k + 1] == '6' && str[k + 2] == '6') {
//				count++;
//				if (N == count) {
//					cout << i << endl;
//					return 0;
//				}
//				break;
//			}
//		}
//	}
//	return 0;
//}