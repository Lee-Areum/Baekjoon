//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	vector<char> answer;
//	vector<int> list;
//	stack<int> s;
//	for (int i = 0; i < N; i++) {
//		int n; cin >> n;
//		list.push_back(n);
//	}
//	int index = 0;
//	for (int i = 1; i <= N; i++) {
//		if (!s.empty() && s.top() == list[index]) {
//			s.pop();
//			answer.push_back('-');
//			i--; index++;
//		}
//		else {
//			s.push(i);
//			answer.push_back('+');
//		}
//	}
//	while (!s.empty()) {
//		int n = s.top();
//		if (n == list[index]) {
//			s.pop();
//			answer.push_back('-');
//			index++;
//		}
//		else {
//			cout << "NO" << endl;
//			return 0;
//		}
//	}
//	for (char c : answer) {
//		cout << c << "\n";
//	}
//	return 0;
//}