//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//int N, K;
//map<int, int> student[2];// 0 : ¿© / 1 : ³²
//
//void solution() {
//	int result = 0;
//	for (int i = 0; i < 2; i++) {
//		for (pair<int, int> n : student[i]) {
//			result += (n.second / K) + ((n.second % K > 0) ? 1 : 0);
//		}
//	}
//	cout << result << endl;
//}
//
//int main() {
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		int s, y; cin >> s >> y;
//		student[s][y] += 1;
//	}
//	solution();
//	return 0;
//}