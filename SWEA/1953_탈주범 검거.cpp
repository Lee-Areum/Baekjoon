#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<bool>> turners(8);

bool canGo(int tuner, int nowDir) {
	int dir = (nowDir > 1) ? nowDir - 2 : nowDir + 2;
	if (turners[tuner][dir]) return true;
	else return false;
}
int main() {
	turners[1] = { true,true,true,true };
	turners[2] = { true,false,true,false };
	turners[3] = { false,true,false,true };
	turners[4] = { true,true,false,false };
	turners[5] = { false,true,true,false };
	turners[6] = { false,false,true,true };
	turners[7] = { true,false,false,true };
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		int N, M, R, C, L; cin >> N >> M >> R >> C >> L;
		vector<vector<int>> under(N); //지하
		for (int i = 0; i < N; i++) {
			for (int k = 0; k < M; k++) {
				int n; cin >> n;
				under[i].push_back(n);
			}
		}
		int dx[] = { -1,0,1,0 };
		int dy[] = { 0,1,0,-1 };
		queue<vector<int>> q; //x,y,cnt
		vector<vector<bool>> visited(N, vector<bool>(M, false));
		q.push({ R,C,0 });
		visited[R][C] = true;
		int answer = 0;
		while (!q.empty()) {
			vector<int> now = q.front(); q.pop();
			if (now[2] == L) continue;
			answer++;
			int nowT = under[now[0]][now[1]];
			for (int i = 0; i < 4; i++) {
				int xx = now[0] + dx[i];
				int yy = now[1] + dy[i];
				if (0 <= xx && xx < N && 0 <= yy && yy < M
					&& !visited[xx][yy] && under[xx][yy] > 0) {
					if (turners[nowT][i] && canGo(under[xx][yy], i)) {
						q.push({ xx,yy,now[2] + 1 });
						visited[xx][yy] = true;
					}
				}
			}
		}
		cout << "#" << t << " " << answer << "\n";
	}
	return 0;
}
