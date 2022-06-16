//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() {
//	string s1, s2; cin >> s1 >> s2;
//	reverse(s1.begin(), s1.end());
//	reverse(s2.begin(), s2.end());
//	string answer = "";
//	int up = 0;
//	for (int i = 0; i < max(s1.size(), s2.size()); i++) {
//		int n1, n2;
//		n1 = (i < s1.size()) ? (s1[i] - '0'):0;
//		n2 = (i < s2.size()) ? (s2[i] - '0') : 0;
//		int num = n1 + n2 + up;
//		up = (num / 10);
//		answer.push_back((num % 10)+'0');
//	}
//	if (up > 0) answer.push_back(up + '0');
//	reverse(answer.begin(), answer.end());
//	cout << answer << endl;
//	return 0;
//}