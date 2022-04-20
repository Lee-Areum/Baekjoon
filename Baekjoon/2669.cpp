#include <iostream>
#include <vector>

using namespace std;

bool visited[100][100] = { false };

void solution(vector<vector<int>> &input) {
	int answer = 0;
	for (auto v : input) {
		for (int x = v[0]; x < v[2]; x++) {
			for (int y = v[1]; y < v[3]; y++) {
				if (!visited[x][y]) {
					visited[x][y] = true;
					answer++;
				}
			}
		}
	}
	cout << answer << endl;
}

int main() {
	vector<vector<int>> input;
	for (int i = 0; i < 4; i++) {
		vector<int> tmp;
		for (int k = 0; k < 4; k++) {
			int n;
			cin >> n;
			tmp.push_back(n);
		}
		input.push_back(tmp);
	}
	solution(input);
}