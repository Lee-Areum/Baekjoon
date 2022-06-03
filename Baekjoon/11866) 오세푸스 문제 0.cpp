//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N, K; cin >> N >> K;
//	vector<int> list;
//	vector<bool> visit(N+1, false);
//	int count = 0;
//	cout << "<" << K;
//	visit[K] = true;
//	int check = 1;
//	for (int i = K; check < N; i++) {
//		if (!visit[i % N+1]) {
//			count++;
//			if (count == K) {
//				cout << ", " << i % N + 1;
//				visit[i % N + 1] = true;
//				count = 0;
//				check++;
//			}
//		}
//	}
//	cout << ">" << endl;
//	return 0;
//}