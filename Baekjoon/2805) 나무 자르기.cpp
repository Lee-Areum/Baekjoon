//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	long long N, K; cin >> N >> K;
//	vector<long long> list;
//	for (long long i = 0; i < N; i++) {
//		long long n; cin >> n;
//		list.push_back(n);
//	}
//	long long left = 0, right = *max_element(list.begin(), list.end());
//	long long answer = right;
//	while (left <= right) {
//		long long mid = (left + right) / 2;
//		long long sum = 0;
//		for (long long i = 0; i < N; i++) {
//			long long num = list[i] - mid;
//			if (num > 0) {
//				sum += num;
//			}
//		}
//		if (sum >= K) {
//			left = mid + 1;
//			answer = mid;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}