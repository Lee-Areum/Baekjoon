#include <iostream>
#include <vector>

using namespace std;

long long limit = 1000000007;

vector<vector<long long>> multi(vector<vector<long long>>& mat1, vector<vector<long long>>& mat2) {
	vector<vector<long long>> answer = vector<vector<long long>>(2, vector<long long>(2, 0));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				answer[i][j] += mat1[i][k] * mat2[k][j];
			}
			answer[i][j] %= limit;
		}
	}
	return answer;
}

int main() {
	long long N; cin >> N;
	vector<vector<long long>> answer = { {1,0},{0,1} };
	vector<vector<long long>> mul = { {1,1},{1,0} };
	while (N > 0) {
		if (N % 2 == 1) {
			answer = multi(answer, mul);
		}
		mul = multi(mul, mul);
		N /= 2;
	}
	cout << answer[0][1] << endl;
	return 0;
}
