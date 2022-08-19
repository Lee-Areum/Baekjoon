#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int N;
vector<vector<int>> costs; //가격
vector<vector<int>> minCosts(1001, {INT_MAX,INT_MAX,INT_MAX}); //각 색칠별 최소가격

//해당 index에서 각 색을 선택했을 때 나올수 있는 최소 가격을 구함
void getCosts(int index) {
	for (int i = 0; i < 3; i++) { 
		vector<int> canCosts;
		for (int k = 0; k < 3; k++) {
			if (k != i) {
				canCosts.push_back(minCosts[index-1][k]);
			}
		}
		int selected = min(canCosts[0], canCosts[1]);
		int nowCost = selected + costs[index][i];
		minCosts[index][i] = min(minCosts[index][i], nowCost);
	}
}

int main() {
	cin >> N; //입력
	costs.push_back({});
	for (int i = 0; i < N; i++) {
		int c1, c2, c3; cin >> c1 >> c2 >> c3;
		costs.push_back({ c1,c2,c3 });
	}
	minCosts[1] = costs[1]; //시작
	for (int i = 2; i <= N; i++) {
		getCosts(i);
	}
	int answer = min(minCosts[N][0], minCosts[N][1]);
	answer = min(answer, minCosts[N][2]);
	cout << answer << endl;
	return 0;
}
