//#include <iostream>
//#include <vector>
//#include <set>
//#include <stack>
//using namespace std;
//
//int main() {
//	int N,M; cin >> N>>M;
//	vector<vector<int>> connect(101);
//	for (int i = 0; i < M; i++) {
//		int a, b; cin >> a >> b;
//		connect[a].push_back(b);
//		connect[b].push_back(a);
//	}
//	stack<int> s; s.push(1);
//	set<int> sets; 
//	while (!s.empty()) {
//		int num = s.top(); s.pop();
//		sets.insert(num);
//		for (int n : connect[num]) {
//			if (sets.find(n) == sets.end()) {
//				s.push(n);
//			}
//		}
//	}
//	cout << sets.size()-1 << endl;
//	return 0;
//}