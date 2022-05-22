//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//char solution(vector<vector<int>> &list) {
//	int maxX, minX, maxY, minY;
//	maxX = max(list[0][0], list[1][0]);
//	minX = min(list[0][2], list[1][2]);
//	maxY = max(list[0][1], list[1][1]);
//	minY = min(list[0][3], list[1][3]);
//	int xdif = minX - maxX;
//	int ydif = minY - maxY;
//	if (xdif > 0 && ydif > 0) return 'a';
//	else if (xdif < 0 || ydif < 0) return 'd';
//	else if (xdif == 0 && ydif == 0) return 'c';
//	return 'b';
//}
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		vector<vector<int>> list;
//		for (int k = 0; k < 2; k++) {
//			vector<int> v;
//			for (int t = 0; t < 4; t++) {
//				int n; cin >> n;
//				v.push_back(n);
//			}
//			list.push_back(v);
//		}
//		cout << solution(list) << endl;
//	}
//	return 0;
//}