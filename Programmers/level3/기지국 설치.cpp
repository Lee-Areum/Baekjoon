#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
	int answer = 0;
	int length = w * 2 + 1;
	int num = stations[0] - w - 1;
	answer += (num + length - 1) / length;

	for (int i = 0; i < stations.size() - 1; i++) {
		num = stations[i + 1] - stations[i] - (w * 2) - 1;
		answer += (num + length - 1) / length;
	}

	num = n - stations[stations.size() - 1] - w ;
	answer += (num + length - 1) / length;

	return answer;
}
