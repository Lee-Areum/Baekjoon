#include <iostream>
#include <vector>
using namespace std;

int N;
long long M;

vector<vector<long long>> multi(vector<vector<long long>>& mat1, vector<vector<long long>>& mat2) {
	vector<vector<long long>> answer(N, vector<long long>(N, 0));
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			answer[i][k] = 0;
			for (int j = 0; j < N; j++) {
				answer[i][k] += (mat1[i][j] * mat2[j][k]);
			}
			answer[i][k] %= 1000;
		}
	}
	return answer;
}

int main() {
	cin >> N >> M;
	vector<vector<long long>> base(N);
	vector<vector<long long>> mul(N,vector<long long>(N,0));
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			long long n; cin >> n;
			base[i].push_back(n);
		}
		mul[i][i] = 1;
	}
	while (M) {
		if (M % 2) {
			mul = multi(base, mul);
		}
		base = multi(base, base);
		M /= 2;
	}
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			cout << mul[i][k] << " ";
		}
		cout << "\n";
	}
	return 0;
}
