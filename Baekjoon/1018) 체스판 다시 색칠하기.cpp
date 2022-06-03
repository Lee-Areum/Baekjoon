//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	int N, M; cin >> N >> M;
//	vector<string> board;
//	int answer = 2500;
//	for (int i = 0; i < N; i++) {
//		string str; cin >> str;
//		board.push_back(str);
//	}
//	for (int i = 0; i <= N-8; i++) {
//		for (int k = 0; k <= M-8; k++) {
//			int count = 0;
//			char comp = board[i][k] == 'W' ? 'B' : 'W';
//			for (int j = 0; j < 8; j++) {
//				for (int f = 0; f < 8; f++) {
//					if (comp == board[i + j][k + f]) {
//						count++;
//						comp = comp == 'W' ? 'B' : 'W';
//					}
//					else {
//						comp = board[i + j][k + f];
//					}
//				}
//				comp = comp == 'W' ? 'B' : 'W';
//			}
//			answer = min(count, answer);
//			count = 0;
//			comp = board[i][k];
//			for (int j = 0; j < 8; j++) {
//				for (int f = 0; f < 8; f++) {
//					if (comp == board[i + j][k + f]) {
//						count++;
//						comp = comp == 'W' ? 'B' : 'W';
//					}
//					else {
//						comp = board[i + j][k + f];
//					}
//				}
//				comp = comp == 'W' ? 'B' : 'W';
//			}
//			answer = min(count, answer);
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}
