#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
	string str; cin >> str;
	string boom; cin >> boom;
	stack<char> stacks;
	for (int i = 0; i < str.size(); i++) {
		if (stacks.size() >= boom.size()-1 && str[i] == boom[boom.size() - 1]) {
			for (int k = boom.size() - 2; k >= 0; k--) {
				if (stacks.top() == boom[k]) {
					stacks.pop();
				}
				else {
					for (k = k + 1; k < boom.size(); k++) {
						stacks.push(boom[k]);
					}
					break;
				}
			}
		}
		else {
			stacks.push(str[i]);
		}
	}
	string answer = "";
	if (stacks.empty()) {
		answer = "FRULA";
	}
	else {
		while (!stacks.empty()) {
			answer.push_back(stacks.top());
			stacks.pop();
		}
		reverse(answer.begin(), answer.end());
	}
	cout << answer << endl;
	return 0;
}

