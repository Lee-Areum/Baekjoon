//#include <iostream>
//#include <vector>
//
//using namespace std;
//int K;
//vector<pair<int, int>> list;
//
//void solution() {
//	list.insert(list.end(),list.begin(),list.end());
//	for (int i = 0; i < list.size() - 3; i++) {
//		if (list[i].first == list[i + 2].first && list[i + 1].first == list[i + 3].first) {
//			int n = list[i].second + list[i + 2].second;
//			int m = list[i + 1].second + list[i + 3].second;
//			int minus = list[i + 1].second * list[i + 2].second;
//			cout << (n * m - minus) * K << endl;
//			return;
//		}
//	}
//}
//
//int main() {
//	cin >> K;
//	for (int i = 0; i < 6; i++) {
//		int n, m; cin >> n >> m;
//		list.push_back({ n,m });
//	}
//	solution();
//	return 0;
//}