//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N, K; cin >> K >> N;
//	vector<long long> list;
//	long long sum = 0;
//	for (int i = 0; i < K; i++) {
//		long long n; cin >> n;
//		list.push_back(n);
//		sum += (long long)n;
//	}
//	long long left = 1, right = sum / N;
//	long long answer = 0;
//	while (left <= right) {
//		long long mid = (left + right) / 2;
//		long long count = 0;
//		for (int k = 0; k < K; k++) {
//			count += list[k] / mid;
//		}
//		if (count < N) {
//			right = mid - 1;
//		}
//		else {
//			answer = mid;
//			left = mid + 1;
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}