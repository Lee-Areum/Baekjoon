//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int N, M; cin >> N >> M;
//	set<string> s;
//	for (int i = 0; i < N; i++) {
//		string str; cin >> str;
//		s.insert(str);
//	}
//	vector<string> v;
//	for (int i = 0; i < M; i++) {
//		string str; cin >> str;
//		if (s.find(str) != s.end()) {
//			v.push_back(str);
//		}
//	}
//	sort(v.begin(), v.end());
//	cout << v.size() << "\n";
//	for (string str : v) {
//		cout << str << "\n";
//	}
//	return 0;
//}