//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int main() {
//    int N, M; cin >> N >> M;
//    vector<int> list;
//    for (int i = 0; i < N; i++) {
//        int n; cin >> n;
//        list.push_back(n);
//    }
//    int answer = 0;
//    for (int i = 0; i < N - 2; i++) {
//        for (int k = i + 1; k < N - 1; k++) {
//            for (int j = k + 1; j < N; j++) {
//                int sum = list[i] + list[k] + list[j];
//                if (sum <= M && M-answer > M-sum) {
//                    answer = sum;
//                }
//            }
//        }
//    }
//    cout << answer << endl;
//    return 0;
//}