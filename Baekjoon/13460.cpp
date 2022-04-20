#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
int max_count = -1;
int numbers[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };

void bfs(char map[20][20], int count, bool look[], int start[2]) {
	int tmp[2] = { start[0],start[1] };
	if (count > 10) return;
	for (int i = 0; i < 4; i++) {
		if (map[tmp[0] + numbers[i][0]][tmp[1] + numbers[i][1]] == 'O') {
			count++;
			max_count = min(count, max_count);
			return;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (map[start[0] + numbers[i][0]][start[1] + numbers[i][1]] == '#') {
			look[i] = true;
			continue;
		}
		while (map[tmp[0] + numbers[i][0]][tmp[1] + numbers[i][1]] == '.') {
			tmp[0] += numbers[i][0]; tmp[1] += numbers[i][1];
		}
		map[start[0]][start[1]] = '.';
		bfs(map, count + 1, look, tmp);
	}
}

int main() {
	char map[20][20];
	int start[2];
	scanf_s("%d %d\n", &N, &M);
	for (int i = 0; i < N; i++) {
		char tmp[20];
		gets_s(tmp);
		for (int k = 0; k < M; k++) {
			map[i][k] = tmp[k];
			if (map[i][k] == 'R') start[0] = i; start[1] = k;
		}
	}
	bool look[4] = { false };
	bfs(map, 0, look,start);
	printf("%d\n", max_count);
	return 0;
}