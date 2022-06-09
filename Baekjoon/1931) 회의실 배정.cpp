//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool comp(pair<int, int> p1, pair<int, int> p2) {
//	if (p1.second == p2.second) {
//		return p1.first < p2.second;
//	}
//	return p1.second < p2.second;
//}
//
//int main() {
//	int N; cin >> N;
//	vector<pair<int, int>> time;
//	for (int i = 0; i < N; i++) {
//		int s, e; cin >> s >> e;
//		time.push_back({ s,e });
//	}
//	stable_sort(time.begin(), time.end(), comp);
//	int answer = 0;
//	int end = 0;
//	for (int i = 0; i < N; i++) {
//		if (end <= time[i].first) {
//			answer++;
//			end = time[i].second;
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}