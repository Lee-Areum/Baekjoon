#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	int N; cin >> N;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		map<char, int> m;
		bool flag = true;
		m[str[0]]++;
		for (int k = 1; k < str.size(); k++) {
			if (str[k-1] != str[k] && m[str[k]] > 0) {
				flag = false;
				break;
			}
			else {
				m[str[k]]++;
			}
		}
		if (flag) {
			answer++;
		}
	}
	cout << answer << endl;
	return 0;
}
