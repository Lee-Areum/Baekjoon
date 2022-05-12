//#include <iostream>
//#include <vector>
//
//using namespace std;
//int N;
//vector<int> list;
//void solution() {
//	int answer = 0;
//	int count = 1;
//	for (int i = 0; i < N-1; i++) { //big
//		if (list[i] <= list[i + 1]) {
//			count++;
//		}
//		else {
//			answer = max(answer, count);
//			count = 1;
//		}
//	}
//	answer = max(answer, count);
//	count = 1;
//	for (int i = 0; i < N - 1; i++) { //small
//		if (list[i] >= list[i + 1]) {
//			count++;
//		}
//		else {
//			answer = max(answer, count);
//			count = 1;
//		}
//	}
//	answer = max(answer, count);
//	cout << answer << endl;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int n; cin >> n;
//		list.push_back(n);
//	}
//	solution();
//	return 0;
//}