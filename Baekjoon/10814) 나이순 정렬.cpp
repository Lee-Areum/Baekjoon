//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool comp(pair<int, string> n1, pair<int, string> n2) {
//	return n1.first < n2.first;
//}
//
//int main() {
//	int N; cin >> N;
//	vector<pair<int,string>> list;
//	for (int i = 0; i < N; i++) {
//		int n; string str;
//		cin >> n >> str;
//		list.push_back({ n,str });
//	}
//	stable_sort(list.begin(), list.end(), comp);
//	for (auto l : list) {
//		cout << l.first << " " << l.second << "\n";
//	}
//	return 0;
//}