//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//using namespace std;
//int main() {
//	vector<int> list;
//	for (int i = 0; i < 3; i++) {
//		int n; cin >> n;
//		list.push_back(n);
//	}
//	sort(list.begin(), list.end());
//	while (list[2] > 0) {
//		if (pow(list[2], 2) == pow(list[1], 2) + pow(list[0], 2)) {
//			cout << "right" << endl;
//		}
//		else cout << "wrong" << endl;
//		list.clear();
//		for (int i = 0; i < 3; i++) {
//			int n; cin >> n;
//			list.push_back(n);
//		}
//		sort(list.begin(), list.end());
//	}
//	return 0;
//}