//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int N; cin >> N;
//	vector<pair<int, int>> list;
//	vector<int> score(N, 1);
//	for (int i = 0; i < N; i++) {
//		int x, y; cin >> x >> y;
//		list.push_back({ x,y });
//	}
//	for (int i = 0; i < N; i++) {
//		for (int k = 0; k < N; k++) {
//			if (list[i].first < list[k].first && list[i].second < list[k].second) {
//				score[i]++;
//			}
//		}
//		cout << score[i] << "\n";
//	}
//	return 0;
//}