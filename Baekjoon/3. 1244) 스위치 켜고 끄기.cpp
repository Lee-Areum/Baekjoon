//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N,S;
//vector<pair<int,int>> students;
//void solution(int *lights) { //남학생 : 1, 여학생 : 2
//	for (int i = 0; i < S; i++) {
//		int n = students[i].second;
//		if (students[i].first == 1) { // 남
//			for (int i = 1; n*i <= N; i++) {
//				lights[n * i] = !lights[n * i];
//			}
//		}
//		else {//여
//			lights[n] = !lights[n];
//			for (int k = 1; n - k > 0 && n + k <= N; k++) {
//				if (lights[n - k] == lights[n + k]) {
//					lights[n- k] = !lights[n - k];
//					lights[n+ k] = !lights[n + k];
//				}
//				else break;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//	int lights[200];
//	for (int i = 1; i <= N; i++) {
//		cin >> lights[i];
//	}
//	cin >> S;
//	for (int i = 0; i < S; i++) {
//		int n1, n2;
//		cin >> n1 >> n2;
//		students.push_back({ n1,n2 });
//	}
//	solution(lights);
//	for (int i = 1; i <= N; i++) {
//		cout << lights[i] << " ";
//		if (i % 20 == 0) {
//			cout << endl;
//		}
//	}
//	return 0;
//}