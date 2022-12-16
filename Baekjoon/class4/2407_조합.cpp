#include <iostream>
#include <string>
using namespace std;

string dp[101][101];
int N, M;
string getSum(string n1, string n2) {
	int i1 = n1.size() - 1, i2 = n2.size() - 1;
	int add = 0;
	string answer = "";
	for (; i1 >= 0 || i2 >= 0; i1--, i2--) {
		int sum = add;
		if (i1 >= 0) {
			sum += (n1[i1] - '0');
		}
		if (i2 >= 0) {
			sum += (n2[i2] - '0');
		}
		add = sum / 10;
		sum %= 10;
		answer = to_string(sum) + answer;
	}
	if (add > 0) {
		answer = to_string(add) + answer;
	}
	return answer;
}

int main() {
	cin >> N >> M;
	for (int i = 0; i <= N; i++) {
		dp[i][0] = dp[i][i] = "1";
		for (int k = 1; k < i; k++) {
			dp[i][k] = getSum(dp[i - 1][k], dp[i - 1][k - 1]);
		}
	}
	cout<<dp[N][M]<<endl;
	return 0;
}
