//#include <iostream>
//#include <queue>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int main() {
//    priority_queue<long, vector<long>, greater<long>> q;
//    int N; cin >> N;
//    for (int i = 0; i < N; i++) {
//        long x; scanf("%d", &x);
//        if (x == 0) {
//            if (q.empty()) {
//                printf("%d\n", 0);
//            }
//            else {
//                printf("%ld\n", q.top());
//                q.pop();
//            }
//        }
//        else {
//            q.push(x);
//        }
//    }
//    return 0;
//}