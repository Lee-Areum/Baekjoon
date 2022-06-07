//#include <iostream>
//#include <vector>
//#include <string>
//#include <ctype.h>
//
//using namespace std;
//
//int main() {
//	string expr; cin >> expr;
//	vector<int> num;
//	vector<char> oper;
//	string str = "";
//	for (int i = 0; i < expr.size(); i++) {
//		if ('0' <= expr[i] && expr[i] <= '9') {
//			str.push_back(expr[i]);
//		}
//		else {
//			num.push_back(stoi(str));
//			str = "";
//			oper.push_back(expr[i]);
//		}
//	}
//	num.push_back(stoi(str));
//	int answer = num[0];
//	for (int i = 1; i < num.size(); i++) {
//		if (oper[i-1] == '+') {
//			answer += num[i];
//		}
//		else {
//			int minus = num[i++];
//			while (i < num.size() && oper[i - 1] == '+') {
//				minus += num[i];
//				i++;
//			}
//			i--;
//			answer -= minus;
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}