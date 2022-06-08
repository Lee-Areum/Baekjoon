//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stdio.h>
//
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	vector<pair<int,int>> list;
//	vector<int> answer(1000001);
//	for (int i = 0; i < N; i++) {
//		int n; scanf("%d", &n);
//		list.push_back({n,i});
//	}
//	sort(list.begin(), list.end());
//	answer[list[0].second] = 0;
//	int count = 0;
//	for (int i = 1; i < N; i++) {
//		if (list[i - 1].first == list[i].first) {
//			answer[list[i].second] = count;
//		}
//		else {
//			answer[list[i].second] = ++count;
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		printf("%d ", answer[i]);
//	}
//	return 0;
//}