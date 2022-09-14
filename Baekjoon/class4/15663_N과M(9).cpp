#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <set>
using namespace std;
int N, M;
vector<int> board;
vector<bool> visited;
set<string> sets;
void solution(int count, string printList) {
	if (count == M) {
		sets.insert(printList);
	}
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			string copy(printList.begin(), printList.end());
			copy += to_string(board[i]) + " ";
			visited[i] = true;
			solution(count + 1, copy);
			visited[i] = false;
		}
	}
}

bool compare(string n1, string n2) {
	stringstream ss1(n1);
	stringstream ss2(n2);
	string s1, s2;
	while (ss1 >> s1) {
		ss2 >> s2;
		if (stoi(s1) == stoi(s2)) {
			continue;
		}
		return stoi(s1) < stoi(s2);
	}
}

int main() {
	cin >> N >> M;
	visited = vector<bool>(N, false);
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		board.push_back(n);
	}
	sort(board.begin(), board.end());
	solution(0, "");
	vector<string> list(sets.begin(), sets.end());
	sort(list.begin(), list.end(), compare);
	for (string str : list) {
		cout << str << "\n";
	}
	return 0;
}
