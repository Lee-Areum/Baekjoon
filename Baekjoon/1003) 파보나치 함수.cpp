//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<pair<int, int>> list;
//void fibonacci(int n) {
//	pair<int, int> tmp = list[n - 2];
//	tmp.first += list[n - 1].first;
//	tmp.second += list[n - 1].second;
//	list.push_back(tmp);
//}
//
//int main() {
//	int T; cin >> T;
//	list.push_back({ 1,0 });
//	list.push_back({ 0,1 });
//	for (int i = 2; i <= 40; i++) {
//		fibonacci(i);
//	}
//	for (int t = 0; t < T; t++) {
//		int N; cin >> N;
//		cout << list[N].first << " " << list[N].second << "\n";
//	}
//	return 0;
//}