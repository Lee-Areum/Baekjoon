#include <iostream>
using namespace std;

char arr[3072][6143];
int N;
void draw(int y, int x) {
	arr[y][x] = '*';
	arr[y + 1][x - 1] = '*';
	arr[y + 1][x + 1] = '*';

	for (int i = 0; i < 5; i++) {
		arr[y + 2][x - 2 + i] = '*';
	}
}

void triangle(int y, int x, int len) {
	if (len == 3) {
		draw(y, x);
		return;
	}
	triangle(y, x, len / 2);
	triangle(y + len/2, x - len/2, len / 2);
	triangle(y + len / 2, x + len / 2, len / 2);
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N * 2-1; k++) {
			arr[i][k] = ' ';
		}
	}
	triangle(0, N-1,N);
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N * 2 - 1; k++) {
			cout << arr[i][k];
		}
		cout << "\n";
	}
	return 0;
}
