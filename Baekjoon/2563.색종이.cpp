//#include <iostream>
//#include <vector>
//
//using namespace std;
//int N;
//vector<pair<int, int>> list;
//
//void solution() {
//	bool board[100][100] = {false};
//	for (auto p : list) {
//		for (int i = 0; i < 10; i++) {
//			for (int k = 0; k < 10; k++) {
//				board[p.first + i][p.second + k] = true;
//			}
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < 100; i++) {
//		for (int k = 0; k < 100; k++) {
//			sum += board[i][k] ? 1 : 0;
//		}
//	}
//	cout << sum << endl;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int a, b;
//		cin >> a >> b;
//		list.push_back({ a,b });
//	}
//	solution();
//	return 0;
//}