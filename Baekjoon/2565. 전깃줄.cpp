//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//vector<pair<int, int>> list;
//int N;
//
//void solution() {
//	sort(list.begin(), list.end());
//	vector<int> arr(N, 1);
//	for (int i = 0; i < N; i++) {
//		for (int k = i + 1; k < N; k++) {
//			if (list[i].second < list[k].second && arr[k] < arr[i] + 1) {
//				arr[k] = arr[i] + 1;
//			}
//		}
//	}
//	int n = *max_element(arr.begin(), arr.end());
//	cout << N - n << endl;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int a, b;
//		cin >> a >> b;
//		list.push_back({ a,b });
//	}
//	solution();
//	return 0;
//}