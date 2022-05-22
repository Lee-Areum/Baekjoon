//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int N;
//vector<int> list;
//
//void solution() {
//	vector<int> sum;
//	sum.assign(list.begin(), list.end());
//	for (int i = 0; i < N; i++) {
//		for (int k = i+1; k < N; k++) {
//			if (list[i] < list[k] && sum[k] < sum[i] + list[k]) {
//				sum[k] = sum[i] + list[k];
//			}
//		}
//	}
//
//	sort(sum.begin(), sum.end());
//	cout<< sum[sum.size()-1] << endl;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int n; cin >> n;
//		list.push_back(n);
//	}
//	solution();
//	return 0;
//}