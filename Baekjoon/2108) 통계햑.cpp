//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <map>
//using namespace std;
//
//bool comp(pair<int, int> n1, pair<int, int> n2) {
//	if (n1.second == n2.second) {
//		return n1.first < n2.first;
//	}
//	return n1.second > n2.second;
//}
//
//int main() {
//	int N; cin >> N;
//	vector<int> list;
//	map<int, int> m;
//	float sum = 0;
//	for (int i = 0; i < N; i++) {
//		int n; cin >> n;
//		list.push_back(n);
//		sum += n; //Æò±Õ°ª
//		m[n]++; //ÃÖºó°ª
//	}
//	int answer = round(sum / N);
//	cout << ((answer == -0)?0:answer) << endl;
//	stable_sort(list.begin(), list.end());
//	cout << list[N / 2] << endl;
//	vector<pair<int, int>> most;
//	most.assign(m.begin(), m.end());
//	stable_sort(most.begin(), most.end(),comp);
//	if (most.size() > 1 && most[0].second == most[1].second) {
//		cout << most[1].first << endl;
//	}
//	else {
//		cout << most[0].first << endl;
//	}
//	cout << list[N - 1] - list[0] << endl;
//
//}