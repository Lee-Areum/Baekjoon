#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

int main() {
	cin >> N >> M;
	int minGroup = 20000, minPer = 20000;
	for (int i = 0; i < M; i++) {
		int n, m;
		cin >> n >> m;
		minGroup = min(minGroup, n);
		minPer = min(minPer, m);
	}
	int answer = 0;
	int perAnswer = N * minPer;
	answer += (N / 6) * minGroup;
	N %= 6;
	int grAnswer = answer + minGroup;
	answer += minPer * N;
	cout << min(min(answer, perAnswer), grAnswer) << endl;
	return 0;
}
