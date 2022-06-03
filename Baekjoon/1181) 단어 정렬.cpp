//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool comp(string str1, string str2) {
//	if (str1.size() == str2.size()) {
//		return str1 < str2;
//	}
//	else {
//		return str1.size() < str2.size();
//	}
//}
//
//int main() {
//	int N; cin >> N;
//	vector<string> list;
//	for (int i = 0; i < N; i++) {
//		string str; cin >> str;
//		list.push_back(str);
//	}
//	sort(list.begin(), list.end(), comp);
//	cout << list[0] << endl;
//	for (int i = 1; i < N;i++) {
//		if (list[i].compare(list[i - 1]) == 0)
//			continue;
//		cout << list[i] << endl;
//	}
//	return 0;
//}