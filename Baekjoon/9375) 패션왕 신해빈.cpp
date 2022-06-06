//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//int main() {
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		int N; cin >> N;
//		unordered_map<string, int> m;
//		for (int i = 0; i < N; i++) {
//			string name, category; cin >> name >> category;
//			m[category]++;
//		}
//		int answer = 1;
//		for (auto tmp : m) {
//			answer *= (tmp.second + 1);
//		}
//		cout << answer - 1 << "\n";
//	}
//	return 0;
//}