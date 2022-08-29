#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		if (str.compare("push") == 0) {
			int n; cin >> n;
			s.push(n);
		}
		else if (str.compare("top") == 0) {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else {
				printf("%d\n", s.top());
			}
		}
		else if (str.compare("pop") == 0) {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else {
				printf("%d\n", s.top());
				s.pop();
			}
		}
		else if (str.compare("size") == 0) {
			cout << s.size() << "\n";
		}
		else {
			cout << s.empty() << "\n";
		}
	}
	return 0;
}
