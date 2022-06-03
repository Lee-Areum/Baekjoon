//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//bool check(string str) {
//	stack<char> s;
//	for (char c : str) {
//		if (c == '(' || c == '[') {
//			s.push(c);
//		}
//		if (c == ')' || c == ']') {
//			if (s.empty()) {
//				return false;
//			}
//			if (c == ')' && s.top() != '(' || c == ']' && s.top() != '[') {
//				return false;
//			}
//			s.pop();
//		}
//	}
//	if (!s.empty()) return false;
//	return true;
//}
//
//int main() {
//	string str; getline(cin, str);
//	while (str.compare(".") != 0) {
//		if (check(str)) {
//			cout << "yes" << endl;
//		}
//		else {
//			cout << "no" << endl;
//		}
//		getline(cin, str);
//	}
//	return 0;
//}