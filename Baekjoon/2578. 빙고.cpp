//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//vector<vector<int>> board;
//vector<int> say;
//map<int, pair<int, int>> m;
//bool flagslide[] = { false,false }; //�밢�� ����
//bool flagwidth[5] = { false }; //���� ����
//bool flagheight[5] = { false }; //���� ����
//
//int bingo() {
//	int count = 0;
//	bool slid[] = { true ,true }; //�밢��
//	for (int i = 0; i < 5; i++) {
//		bool flag[] = { true ,true }; //����, ����
//		for (int k = 0; k < 5; k++) {
//			if (board[i][k] != -1) { //����
//				flag[0] = false;
//			}
//			if (board[k][i] != -1) { //����
//				flag[1] = false;
//			}
//		}
//		if (flag[0])count++;
//		if (flag[1])count++;
//		if (board[i][i] != -1) {
//			slid[0] = false;
//		}
//		if (board[4 - i][i] != -1) {
//			slid[1] = false;
//		}
//	}
//	if (slid[0]) count++;
//	if (slid[1])count++;
//	return count;
//}
//
//void solution() { 
//	for (int i = 0; i < 25; i++) {
//		auto index = m.find(say[i])->second;
//		board[index.first][index.second] = -1;
//		if (i > 10) {
//			if (bingo() >= 3) {
//				cout << i + 1 << endl;
//				return;
//			}
//		}
//	}
//}
//
//int main() {
//	for (int i = 0; i < 5; i++) {
//		vector<int> tmp;
//		for (int k = 0; k < 5; k++) {
//			int n; cin >> n;
//			tmp.push_back(n);
//			m.insert({ n,{i,k} });
//		}
//		board.push_back(tmp);
//	}
//	for (int i = 0; i < 25; i++) {
//		int n; cin >> n;
//		say.push_back(n);
//	}
//	solution();
//	return 0;
//}