#include <iostream>
#include <queue>
#include <map>
#include <cmath>
using namespace std;

map<int, int> m;
bool checkMap(int num) {
	if (num == 0) {
		if (m[0] < 0) {
			return false;
		}
	}
	while (num) {
		if (m[num % 10] < 0) {
			return false;
		}
		num /= 10;
	}
	return true;
}
int main() {
	int N; cin >> N;
	int M; cin >> M;
	for (int i = 0; i < M; i++) { //100부터 이동
		int num; cin >> num;
		m[num] = -1;
	}
	int answer = abs(100-N);
	for (int i = 0; i <= max(N,answer); i++) { //근사값으로 번호이동
		bool flag = N-i >= 0 && checkMap(N - i);
		if (flag || checkMap(N + i)) {
			int count = 0;
			int num = flag ? N - i : N + i;
			if (num == 0) count = 1;
			while (num) {
				count++;
				num /= 10;
			}
			cout << min(i + count,answer) << endl;
			return 0;
		}
	}
	cout << answer << endl;
	return 0;
}
