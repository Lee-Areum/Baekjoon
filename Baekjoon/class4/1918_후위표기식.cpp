#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	string str; cin >> str;
	string answer = "";
	stack<char> stacks;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+' || str[i] == '-') {
			while (!stacks.empty()) {
				char c = stacks.top();
				if (c == '(') {
					break;
				}
				answer += c;
				stacks.pop();
			}
			stacks.push(str[i]);
		}
		else if (str[i] == ')') {
			while (!stacks.empty() && stacks.top() != '(') {
				answer += stacks.top();
				stacks.pop();
			}
			stacks.pop();
		}
		else if(isalpha(str[i])){
			answer += str[i];
		}
		else if (str[i] == '*' || str[i] == '/') {
			while (!stacks.empty()) {
				char c = stacks.top();
				if (c == '(' || c=='+'||c=='-') {
					break;
				}
				answer += c;
				stacks.pop();
			}
			stacks.push(str[i]);
		}
		else{
			stacks.push(str[i]);
		}
	}
	while (!stacks.empty()) {
		answer += stacks.top();
		stacks.pop();
	}
	cout << answer << endl;
	return 0;
}
