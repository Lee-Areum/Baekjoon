//#include <iostream>
//#include <vector>
//
//using namespace std;
//int w, h, n;
//vector<vector<int>> list;
//
//void solution() {
//	int result = 0;
//	vector<int> now = list[list.size() - 1];
//	for (int i = 0; i < list.size() - 1; i++) {
//		int sum = 0;
//		vector<int> togo = list[i];
//		int diff = abs(now[0] - togo[0]);
//		if (diff == 2) { //정반대
//			sum += togo[1] + togo[2] + now[1] + now[2];
//		}
//		else { //인접 //같은 곳
//			sum += abs(togo[1] - now[1]);
//			sum += abs(togo[2] - now[2]);
//		}
//		result += min(sum, 2 * (w + h) - sum);
//	}
//	cout << result << endl;
//}
//
//int main() {
//	cin >> w >> h >> n;
//	for (int i = 0; i <= n; i++) {
//		int a, b; cin >> a >> b;
//		switch (a) {
//		case 1: //북
//			list.push_back({ 1,0,b });
//			break;
//		case 2: //남
//			list.push_back({ 3,h,b });
//			break;
//		case 3: //서
//			list.push_back({ 4,b,0 });
//			break;
//		case 4: //동
//			list.push_back({ 2,b,w });
//			break;
//		}
//	}
//	solution();
//
//	return 0;
//}