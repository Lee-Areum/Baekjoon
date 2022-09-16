#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<vector<int>> parties; //파티별 참여하는 사람수
vector<vector<int>> humuns; //사람별 참여하는 파티 번호
vector<int> know; // 알고있는 사람
bool cantLie[51] = { false };

void findKnow(int human, int party) {
	cantLie[party] = true;
	for (int h : parties[party]) { //해당 파티에 참여한 사람
		if (h != human) {
			for (int p : humuns[h]) { //그 사람이 참여한 파티
				if (p != party && !cantLie[p]) { //거짓말을 할 수 있는 파티
					findKnow(h, p);
				}
			}
		}
	}
}

int main() {
	cin >> N >> M;
	int count; cin >> count;
	for (int i = 0; i < count; i++) {
		int input; cin >> input;
		know.push_back(input);
	}
	parties = vector<vector<int>>(M);
	humuns = vector<vector<int>>(N + 1);
	for (int i = 0; i < M; i++) {
		int n; cin >> n;
		for (int k = 0; k < n; k++) {
			int input; cin >> input;
			parties[i].push_back(input);
			humuns[input].push_back(i);
		}
	}
	for (int n : know) {
		for (int k : humuns[n]) {
			findKnow(n, k);
		}
	}
	int answer = 0;
	for (int i = 0; i < M; i++) {
		if (!cantLie[i]) answer++;
	}
	cout << answer << endl;
}
