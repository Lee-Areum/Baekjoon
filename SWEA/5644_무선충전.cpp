#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int dx[] = { 0,-1,0,1,0 };
int dy[] = { 0,0,1,0,-1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		int M, A; cin >> M >> A;
		vector<int> goA, goB;
		vector<vector<int>> BC; //x,y,C,P
		for (int i = 0; i < M; i++) {
			int n; cin >> n;
			goA.push_back(n);
		}
		goA.push_back(0);
		for (int i = 0; i < M; i++) {
			int n; cin >> n;
			goB.push_back(n);
		}
		goB.push_back(0);
		for (int i = 0; i < A; i++) {
			int x, y, C, P; cin >> x >> y >> C >> P;
			BC.push_back({ y,x,C,P });
		}
		//입력 완료
		pair<int, int> Aa = { 1,1 }, Bb = { 10,10 };
		int answer = 0;
		for (int i = 0; i <= M; i++) {
			vector<pair<int, int>> canA, canB;
			for (int k = 0; k < A; k++) {
				int difA, difB;
				difA = abs(BC[k][0] - Aa.first) + abs(BC[k][1] - Aa.second);
				if (difA <= BC[k][2]) {
					canA.push_back({ BC[k][3],k });
				}
				difB = abs(BC[k][0] - Bb.first) + abs(BC[k][1] - Bb.second);
				if (difB <= BC[k][2]) {
					canB.push_back({ BC[k][3],k });
				}
			}
			sort(canA.begin(), canA.end(), greater<>());
			sort(canB.begin(), canB.end(), greater<>());
			int check = 0;
			int sum = 0;
			int a = (canA.empty()) ? 0 : canA[0].first;
			int b = (canB.empty()) ? 0 : canB[0].first;
			if (a == b && a != 0) {
				if (canA[0].second != canB[0].second) {
					sum = a + b;
				}
				else {
					sum += a;
					a = (canA.size() == 1) ? 0 : canA[1].first;
					b = (canB.size() == 1) ? 0 : canB[1].first;
					if (a > b) {
						sum += a;
					}
					else {
						sum += b;
					}
				}
			}
			else {
				sum = a + b;
			}
			//cout << sum << endl;
			answer += sum;
			Aa.first += dx[goA[i]]; Aa.second += dy[goA[i]];
			Bb.first += dx[goB[i]]; Bb.second += dy[goB[i]];
		}
		cout << "#" << t << " " << answer << "\n";
	}
	return 0;
}
