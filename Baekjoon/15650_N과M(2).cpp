#include <iostream>
using namespace std;

int N, M;
bool visited[10] = { false };
int choosed[10] = { 0 };
void dfs(int index) {
	if (index == M+1) {
		for (int i = 1; i <= M; i++) {
			cout << choosed[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = choosed[index-1]+1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			choosed[index] = i;
			dfs(index + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> N >> M;
	dfs(1);
	return 0;
}
