//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//vector<pair<int, int>> list;
//int big = 0,N;
//
//bool compare(pair<int, int> n1, pair<int, int> n2) {
//	return n1.first < n2.first;
//}
//
//void solution() {
//	int answer = 0;
//	sort(list.begin(), list.end(), compare);
//	for (int i = 0; i < N; i++) {
//		big = (list[big].second <= list[i].second) ? i : big;
//	}
//	pair<int, int> tmp = list[0];
//	for(int i = 1;i<=big;i++){
//		if (list[i].second >= tmp.second) {
//			answer += (list[i].first - tmp.first) * tmp.second;
//			tmp = list[i];
//		}
//	}
//	answer += list[big].second;
//	tmp = list[N-1];
//	for (int i = N-2; i >= big; i--) {
//		if (list[i].second >= tmp.second) {
//			answer += (tmp.first - list[i].first) * tmp.second;
//			tmp = list[i];
//		}
//	}
//	cout << answer << endl;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int n,m; cin >> n>>m;
//		list.push_back({ n,m });
//	}
//	solution();
//	return 0;
//}