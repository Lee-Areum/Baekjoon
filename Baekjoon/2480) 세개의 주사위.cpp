//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	vector<int> list;
//	for (int i = 0; i < 3; i++) {
//		int n; cin >> n;
//		list.push_back(n);
//	}
//	sort(list.begin(), list.end(), greater<>());
//	int answer = 0;
//	int count = 1,num;
//	for (int i = 0; i < 2; i++) {
//		if (list[i] == list[i + 1]) {
//			count++;
//			num = list[i];
//		}
//	}
//	if (count > 2) {
//		answer = 10000 + num * 1000;
//	}
//	else if (count > 1) {
//		answer = 1000 + num * 100;
//	}
//	else {
//		answer = list[0] * 100;
//	}
//	cout << answer << endl;
//	return 0;
//}