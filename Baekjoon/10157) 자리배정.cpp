//#include <iostream>
//#include <vector>
//
//using namespace std;
//int M,N,K;
//vector<pair<int, int>> heighWay = { {1,0},{-1,0} };
//vector<pair<int, int>> lengthWay = { {0,1},{0,-1},{-1,0} };
//
//void solution() {
//	if (K > M * N) {
//		cout << 0 << endl;
//		return;
//	}
//	int num = 0;
//	while (K > 0) {
//		for (int i = 1; i < N - (num*2); i++) { //위
//			if (--K <= 0) {
//				cout << num + 1  << " " << num + i << endl;
//				return;
//			}
//		}
//		for (int i = 1; i < M - (num * 2); i++) { //오른쪽
//			if (--K <= 0) {
//				cout << num+i << " " <<N-num << endl;
//				return;
//			}
//		}
//		for (int i = 0; i < N -1 - (num * 2); i++) { //아래
//			if (--K <= 0) {
//				cout << M-num << " " << N-num-i << endl;
//				return;
//			}
//		}
//		for (int i = 0; i < M - 1 - (num * 2); i++) { //왼쪽
//			if (--K <= 0) {
//				cout << M-num-i << " " << num+1 << endl;
//				return;
//			}
//		}
//		num++;
//	}
//}
//
//int main() {
//	cin >> M >> N;
//	cin >> K;
//	solution();
//	return 0;
//}