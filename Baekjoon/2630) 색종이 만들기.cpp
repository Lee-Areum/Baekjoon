//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//int main() {
//	int N; cin >> N;
//	vector<vector<int>> board;
//	for (int i = 0; i < N; i++) {
//		vector<int> tmp;
//		for (int k = 0; k < N; k++) {
//			int n; cin >> n;
//			tmp.push_back(n);
//		}
//		board.push_back(tmp);
//	}
//	vector<int> answer(3);
//	while (board.size() >= 2) {
//		vector<vector<int>> list;
//		for (int i = 0; i < board.size() / 2; i++) {
//			vector<int> tmp;
//			for (int k = 0; k < board.size() / 2; k++) {
//				int count[3] = { 0 };
//				for (int j = 0; j < 2; j++) {
//					for (int t = 0; t < 2; t++) {
//						count[(board[(2 * i) + j][(2 * k) + t])]++;
//					}
//				}
//				if (count[2] > 0) {
//					for (int j = 0; j < 2; j++) {
//						answer[j] += count[j];
//					}
//					tmp.push_back(2);
//				}
//				else if (count[1] == 0) {
//					tmp.push_back(0);
//				}
//				else if (count[0] == 0) {
//					tmp.push_back(1);
//				}
//				else {
//					for (int j = 0; j < 2; j++) {
//						answer[j] += count[j];
//					}
//					tmp.push_back(2);
//				}
//			}
//			list.push_back(tmp);
//		}
//		board.assign(list.begin(), list.end());
//	}
//	answer[board[0][0]]++;
//	for (int i = 0; i < 2; i++) {
//		cout << answer[i] << endl;
//	}
//	return 0;
//}