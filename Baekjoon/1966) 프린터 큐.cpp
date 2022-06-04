//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		int N, M; cin >> N >> M;
//		queue<pair<int,int>> q;
//		vector<int> list;
//		for (int i = 0; i < N; i++) {
//			int n; cin >> n;
//			list.push_back(n);
//			q.push({n,i});
//		}
//		sort(list.begin(), list.end(), greater<>());
//		int index = 0;
//		int count = 1;
//		while (!q.empty()) {
//			if (list[index] == q.front().first) {
//				index++;
//				if (q.front().second == M) {
//					cout << count << "\n";
//					break;
//				}
//				q.pop();
//				count++;
//			}
//			else {
//				pair<int, int> tmp = q.front();
//				q.pop();
//				q.push(tmp);
//			}
//		}
//	}
//	return 0;
//}