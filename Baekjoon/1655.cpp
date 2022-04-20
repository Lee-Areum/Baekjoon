/*#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<>> big_queue;
priority_queue<int, vector<int>, less<>> small_queue;

int main() {
	int N;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		int num;
		scanf_s("%d", &num);
		
		if (small_queue.size() == big_queue.size()) {
			small_queue.push(num);
		}
		else {
			big_queue.push(num);
		}

		if (!small_queue.empty() && !big_queue.empty() && big_queue.top() <= small_queue.top()) {
			int n1, n2;
			n1 = small_queue.top(); n2 = big_queue.top();
			small_queue.pop(); big_queue.pop();
			small_queue.push(n2); big_queue.push(n1);
		}
		printf("%d\n", small_queue.top());
	}
	return 0;
}*/