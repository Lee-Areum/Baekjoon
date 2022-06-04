//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, M, B;
//int answer = 6400000000;
//int height = 0;
//void check(vector<vector<int>>& list, int i) {
//    int count = 0;
//    int out = B;
//    for (int j = 0; j < N; j++) {
//        for (int k = 0; k < M; k++) {
//            if (list[j][k] >= i) {
//                count += (list[j][k] - i) * 2;
//                out += (list[j][k] - i);
//            }
//            else {
//                int sum = (i - list[j][k]);
//                count += sum;
//                out -= sum;
//            }
//        }
//    }
//    if (out >= 0) {
//        if (count <= answer) {
//            answer = count;
//            height = i;
//        }
//    }
//    return;
//}
//
//int main() {
//    cin >> N >> M >> B;
//    vector<vector<int>> list;
//    int maxs = 0, mins = 6400000000;
//    for (int i = 0; i < N; i++) {
//        vector<int> tmp;
//        for (int k = 0; k < M; k++) {
//            int n; cin >> n;
//            tmp.push_back(n);
//            mins = min(mins, n);
//            maxs = max(maxs, n);
//        }
//        list.push_back(tmp);
//    }
//    for(int i = mins;i<=maxs;i++){
//        check(list, i);
//    }
//    cout << answer << " " << height << endl;
//    return 0;
//}