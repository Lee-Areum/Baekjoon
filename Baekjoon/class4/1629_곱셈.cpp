#include <iostream>
#include <vector>
using namespace std;

vector<long long> dp(10000, -1);
long long A, B, C;
long long solution(long long n) {
	if (n < 10000) {
		if (dp[n] < 0) {
			dp[n] = ((solution(n / 2)*solution(n / 2))%C*solution(n % 2)) % C;
		}
		return dp[n];
	}
	else
	{
		return ((solution(n / 2)*solution(n / 2)) % C*solution(n % 2)) % C;
	}
}

int main() {
	cin >> A >> B >> C;
	dp[0] = 1; dp[1] = A % C;
	long long answer = solution(B);
	cout << answer << endl;
	return 0;
}
