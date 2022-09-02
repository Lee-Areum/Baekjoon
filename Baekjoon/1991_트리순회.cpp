#include <iostream>
#include <vector>
#include <map>
using namespace std;

int N;
map<char, vector<char>> m;
void pre(char n) {
	cout << n;
	if (m[n][0] != '0') {
		pre(m[n][0]);
	}
	if (m[n][1] != '0') {
		pre(m[n][1]);
	}
}
void mid(char n) {
	if (m[n][0] != '0') {
		mid(m[n][0]);
	}
	cout << n;
	if (m[n][1] != '0') {
		mid(m[n][1]);
	}
}
void back(char n) {
	if (m[n][0] != '0') {
		back(m[n][0]);
	}
	if (m[n][1] != '0') {
		back(m[n][1]);
	}
	cout << n;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		if (b != '.') {
			m[a].push_back(b);
		}
		else {
			m[a].push_back('0');
		}
		if (c != '.') {
			m[a].push_back(c);
		}
		else {
			m[a].push_back('0');
		}
	}
	pre('A');
	cout << endl;
	mid('A');
	cout << endl;
	back('A');
	cout << endl;
	return 0;
}
