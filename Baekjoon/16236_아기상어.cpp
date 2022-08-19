#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N;
void initVisited(vector<vector<bool>> &visited) {
	visited.clear();
	for (int i = 0; i < N; i++) {
		vector<bool> tmp(N,false);
		visited.push_back(tmp);
	}
}

int main() {
	 cin >> N;
	vector<vector<int>> sea(N);
	pair<int, int> shark; //상어 위치
	for (int i = 0; i < N; i++) { //입력
		for (int k = 0; k < N; k++) {
			int input; cin >> input;
			sea[i].push_back(input);
			if (input == 9) {
				shark = { i,k };
			}
		}
	}
	int sharkSize = 2; //상어 크기
	int eated = 0; //먹은 물고기 수
	int totalTime = 0;
	int dx[] = { 0,1,0,-1 };
	int dy[] = { -1,0,1,0 };
	vector<vector<int>> canEat; //먹을 수 있는 물고기
	do {
		canEat.clear();
		int minDist = 5000; //canEat에 들어갈 수 있는 거리
		queue<vector<int>> q; //x,y,거리
		vector<vector<bool>> visited(N, vector<bool>(N, false));
		q.push({ shark.first,shark.second,0 });
		visited[shark.first][shark.second] = true;
		while (!q.empty()) {
			vector<int> now = q.front(); q.pop();
			if (now[2] > minDist) continue;
			if (0 < sea[now[0]][now[1]] && sea[now[0]][now[1]] < sharkSize) {
				if (now[2] < minDist) {
					minDist = now[2];
					canEat.clear();
					canEat.push_back(now);
				}
				else if (now[2] == minDist) {
					canEat.push_back(now);
				}
			}
			for (int i = 0; i < 4; i++) {
				int xx = now[0] + dx[i];
				int yy = now[1] + dy[i];
				if (0 <= xx && xx < N && 0 <= yy && yy < N && !visited[xx][yy]) {
					if (sea[xx][yy] <= sharkSize) {
						visited[xx][yy] = true;
						q.push({ xx,yy,now[2] + 1 });
					}
				}
			}
		}
		if (canEat.size() > 0) {
			sort(canEat.begin(), canEat.end());
			vector<int> togo = canEat[0];
			sea[shark.first][shark.second] = 0;
			sea[togo[0]][togo[1]] = 9;
			shark = { togo[0],togo[1] };
			totalTime += togo[2];
			eated++;
			if (eated == sharkSize) {
				sharkSize++;
				if (sharkSize >= 7) {
					sharkSize = 7;
				}
				eated = 0;
			}
		}
	} while (!canEat.empty());
	cout << totalTime << endl;
	return 0;
}
