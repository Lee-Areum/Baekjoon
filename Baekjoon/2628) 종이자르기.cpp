//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int N, W, H,max_size = 0;
//vector<vector<int>> list = { {0},{0} };
//
//void solution() {
//	sort(list[0].begin(), list[0].end());
//	sort(list[1].begin(), list[1].end());
//	for (int i = 1; i < list[0].size(); i++) { //가로로 자름
//		for (int k = 1; k < list[1].size(); k++) { //세로로 자름
//			int size = (list[1][k] - list[1][k - 1]) * (list[0][i] - list[0][i - 1]);
//			if (max_size < size) max_size = size;
//		}
//	}
//	cout << max_size << endl;
//}
//
//int main() {
//	cin >> W >> H;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int n, m;
//		cin >> n >> m;
//		list[n].push_back(m);
//	}
//	list[0].push_back(H);
//	list[1].push_back(W);
//	solution();
//	return 0;
//}