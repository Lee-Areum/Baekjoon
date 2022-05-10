//#include <iostream>
//#include <vector>
//
//using namespace std;
//int N;
//vector<vector<int>> list;
//int check[2000][2000] = { 0 };
//
//void solution() {
//	for (int t = 0; t < list.size();t++) {
//		vector<int> v = list[t];
//		for (int i = 0; i < v[2]; i++) { //세로
//			for (int k = 0; k < v[3]; k++) {//가로
//				check[v[0] + i][v[1] + k] = t+1;
//			}
//		}
//	}
//	int answer[200] = { 0 };
//	for (int i = 0; i <= 1001; i++) {
//		for (int k = 0; k <= 1001; k++) {
//			if (check[i][k] > 0) {
//				answer[check[i][k]]++;
//			}
//		}
//	}
//	for (int i = 1; i <= list.size(); i++) {
//		cout << answer[i] << endl;
//	}
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int x, y, w, h;
//		cin >> x >> y >> w >> h;
//		list.push_back({ x,y,w,h });
//	}
//	solution();
//	return 0;
//}