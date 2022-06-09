//#include <iostream>
//#include <stdio.h>
//#include <queue>
//#include <algorithm>
//#include <cstdlib>
//
//using namespace std;
//struct comp {
//	bool operator()(int &n1, int& n2) {
//		if (abs(n1) == abs(n2)) {
//			return n1 > n2;
//		}
//		return abs(n1) > abs(n2);
//	}
//};
//
//int main() {
//	int N; cin >> N;
//	priority_queue<int, vector<int>, comp> pq;
//	for (int i = 0; i < N; i++) {
//		int n; scanf("%d", &n);
//		if (n == 0) {
//			int out = 0;
//			if (!pq.empty()) {
//				out = pq.top();
//				pq.pop();
//			}
//			printf("%d\n", out);
//		}
//		else {
//			pq.push(n);
//		}
//	}
//	return 0;
//}