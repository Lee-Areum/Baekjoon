//#include <iostream>
//#include <string>
//#include <deque>
//#include <sstream>
//
//using namespace std;
//
//deque<int> dq;
//bool flag = true;
//bool check(string p) {
//	for (int i = 0; i < p.size(); i++) {
//		if (p[i] == 'R') {
//			flag = !flag;
//		}
//		else {
//			if (dq.empty()) {
//				return true;
//			}
//			if (flag) {
//				dq.pop_front();
//			}
//			else {
//				dq.pop_back();
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		flag = true;
//		string p; cin >> p;
//		int n; cin >> n;
//		string nums; cin >> nums;
//		nums = nums.substr(1, nums.size() - 2);
//		stringstream ss(nums);
//		string tmp;
//		while (getline(ss, tmp, ',')) {
//			if (tmp.size() > 0) {
//				dq.push_back(stoi(tmp));
//			}
//		}
//		if (check(p)) {
//			cout << "error" << endl;
//		}
//		else {
//			string answer = "[";
//			while (!dq.empty()) {
//				if (flag) {
//					answer += to_string(dq.front());
//					dq.pop_front();
//				}
//				else {
//					answer += to_string(dq.back());
//					dq.pop_back();
//				}
//				answer += ",";
//			}
//			if (answer.size() > 1) {
//				answer = answer.substr(0, answer.size() - 1);
//			}
//			answer += "]";
//			cout << answer << endl;
//		}
//	}
//}