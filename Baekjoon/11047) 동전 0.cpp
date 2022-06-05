//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main() {
//	int N, K; cin >> N >> K;
//	vector<int> coin;
//	for (int i = 0; i < N; i++) {
//		int num; cin >> num;
//		coin.push_back(num);
//	}
//	int answer = 0;
//	for (int i = N - 1; i >= 0 && K > 0; i--) {
//		int num = K / coin[i];
//		if (num > 0) {
//			answer += num;
//			K -= num * coin[i];
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}