//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//int N;
//vector<vector<int>> dices;
//unordered_map<int, int> p = { {0,5},{1,3},{2,4},{3,1},{4,2},{5,0} };
//vector<int> scores = { 0,0,0,0,0,0 };
//
//int find_best(int index, int i) {
//	int max = 0;
//	for (int k = 0; k < 6; k++) {
//		if (k != i && k != p[i] && max < dices[index][k]) {
//			max = dices[index][k];
//		}
//	}
//	return max;
//}
//
//void solution() {
//	for (int i = 0; i < dices[0].size(); i++) {
//		scores[i] += find_best(0, i);
//	}
//	for (int i = 1; i < dices.size(); i++) {
//		vector<int> tmp(6);
//		for (int k = 0; k < 6; k++) {
//			int num = dices[i - 1][p[k]]; //위로가야하는 숫자
//			int n = find(dices[i].begin(), dices[i].end(), num) - dices[i].begin();
//			tmp[n] = scores[k];
//		}
//		scores.assign(tmp.begin(), tmp.end());
//		for (int k = 0; k < 6; k++) {
//			scores[k] += find_best(i, k);
//		}
//	}
//	cout << *max_element(scores.begin(), scores.end()) << endl;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		vector<int> tmp;
//		for (int k = 0; k < 6; k++) {
//			int n; cin >> n;
//			tmp.push_back(n);
//		}
//		dices.push_back(tmp);
//	}
//	solution();
//	return 0;
//}