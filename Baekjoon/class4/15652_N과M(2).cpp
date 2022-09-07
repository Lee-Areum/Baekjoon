#include <iostream>
#include <vector>
using namespace std;
int N, M;
int list[10] = { 0 };

void Solution(int index, int before) {
	if (index == M) {
		for (int i = 0; i < M; i++) {
			cout << list[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = before; i <= N; i++) {
		list[index] = i;
		Solution(index + 1, i);
	}
}

int main() {
	cin >> N>>M;
	Solution(0,1);
}
