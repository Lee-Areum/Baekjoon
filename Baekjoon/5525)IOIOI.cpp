//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int N, M; cin >> N >> M;
//	string str; cin >> str;
//	int answer = 0;
//	for (int i = 1; i < str.size() - 1; i++) {
//		int count = 0;
//		while (i<str.size()-1 && str[i] == 'O' && str[i - 1] == 'I' && str[i + 1] == 'I') {
//			count++;
//			i += 2;
//		}
//		if (count >= N) {
//			answer += count - N + 1;
//		}
//	}
//	cout << answer << endl;
//	return 0;
//}