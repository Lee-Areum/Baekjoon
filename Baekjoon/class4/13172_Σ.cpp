#include <iostream>
#include <algorithm>
#define MOD 1000000007
using namespace std;

long long solution(long long n, long long m) {
	long long answer = 1;
	while (m) {
		if (m % 2) answer = answer * n % MOD;
		m = m / 2;
		n = n * n % MOD;
	}
	return answer;
}

int main() {
	int N; cin >> N;
	long long answer = 0;
	while (N--) {
		int n, s; cin >> s >> n;
		answer += (n * (solution(s, MOD - 2))) % MOD;
	}
	cout << answer % MOD;
	return 0;
}
