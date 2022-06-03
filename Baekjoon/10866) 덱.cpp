//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	deque<int> d;
//	for (int i = 0; i < N; i++) {
//		string str; cin >> str; 
//		int n;
//		if (str.compare("push_back") == 0) {
//			 cin >> n;
//			 d.push_back(n);
//			 continue;
//		}
//		if (str.compare("push_front") == 0) {
//			cin >> n;
//			d.push_front(n);
//			continue;
//		}
//		if (str.compare("pop_front") == 0) {
//			if (d.empty()) cout << -1 << endl;
//			else {
//				cout << d.front() << endl;
//				d.pop_front();
//			}
//			continue;
//		}
//		if (str.compare("pop_back") == 0) {
//			if (d.empty()) cout << -1 << endl;
//			else {
//				cout << d.back() << endl;
//				d.pop_back();
//			}
//			continue;
//		}
//		if (str.compare("size") == 0) {
//			cout << d.size() << endl;
//			continue;
//		}
//		if (str.compare("empty") == 0) {
//			cout << d.empty() << endl;
//			continue;
//		}
//		if (str.compare("front") == 0) {
//			if (d.empty()) {
//				cout << -1 << endl;
//			}
//			else {
//				cout << d.front() << endl;
//			}
//			continue;
//		}
//		if (str.compare("back") == 0) {
//			if (d.empty()) {
//				cout << -1 << endl;
//			}
//			else {
//				cout << d.back() << endl;
//			}
//			continue;
//		}
//	}
//	return 0;
//}