//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<vector<long long>> &stud,long long K, int N) {
//	vector<long long> n1, n2;
//	for (int i = 0; i < N; i++) {
//		for (int k = 0; k < N; k++) {
//			n1.push_back(stud[0][i] + stud[1][k]);
//			n2.push_back(stud[2][i] + stud[3][k]);
//		}
//	}
//	long long minest = 50000000;
//	sort(n1.begin(), n1.end());
//	sort(n2.begin(), n2.end());
//
//	for (int i = 0; i < n1.size(); i++) {
//		long long goal = K - n1[i];
//		int right = n1.size()-1, left = 0;
//		while (left <= right) {
//			int mid = (left + right) / 2;
//			if (abs(minest - K) > abs(n2[mid] - goal)) {
//				minest = n2[mid] + n1[i];
//			}
//			else if (abs(minest - K) == abs(n2[mid] - goal)) {
//				minest = min(minest, (n2[mid] + n1[i]));
//			}
//			if (goal < n2[mid]) {
//				right = mid-1;
//			}
//			else if (goal > n2[mid]) {
//				left = mid +1;
//			}
//			else {
//				return K;
//			}
//		}
//	}
//	return minest;
//}
//
//int main() {
//	int T; cin >> T;
//	for (int i = 0; i < T; i++) {
//		long long K; int N;
//		cin >> K >> N;
//		vector<vector<long long>> stud;
//		for (int k = 0; k < 4; k++) {
//			vector<long long> tmp;
//			for (int t = 0; t < N; t++) {
//				long long n; cin >> n;
//				tmp.push_back(n);
//			}
//			stud.push_back(tmp);
//		}
//		cout << solution(stud,K,N) << endl;
//	}
//	return 0;
//}