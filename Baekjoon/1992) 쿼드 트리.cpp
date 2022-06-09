//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int check(string &str) {
//	if (str.compare("0") == 0) {
//		return 0;
//	}
//	else if (str.compare("1") == 0) {
//		return 1;
//	}
//	else {
//		return 2;
//	}
//}
//
//int main() {
//	int N; cin >> N;
//	vector<vector<string>> board;
//	for (int i = 0; i < N; i++) {
//		string str; cin >> str;
//		vector<string> tmp;
//		for (int k = 0; k < N; k++) {
//			string s; s += str[k];
//			tmp.push_back(s);
//		}
//		board.push_back(tmp);
//	}
//	while (board.size() > 1) {
//		vector<vector<string>> tmp;
//		for (int i = 0; i < board.size(); i+= 2) {
//			vector<string> row;
//			for (int k = 0; k < board.size(); k+=2) {
//				int count[3] = { 0 };
//				count[check(board[i][k])]++;
//				count[check(board[i][k+1])]++;
//				count[check(board[i+1][k])]++;
//				count[check(board[i+1][k+1])]++;
//				if (count[2] > 0 || (count[0] > 0 && count[1] > 0)) {
//					string str = "(";
//					str += board[i][k] + board[i][k + 1] + board[i + 1][k] + board[i + 1][k + 1];
//					str += ")";
//					row.push_back(str);
//				}
//				else if(count[0]>0){
//					row.push_back("0");
//				}
//				else {
//					row.push_back("1");
//				}
//			}
//			tmp.push_back(row);
//		}
//		board.assign(tmp.begin(), tmp.end());
//	}
//	cout << board[0][0] << endl;
//	return 0;
//}