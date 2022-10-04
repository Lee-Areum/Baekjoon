#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> pq(works.begin(), works.end());
    for (int i = 0; i < n; i++) {
        if (pq.top() == 0) {
            return 0;
        }
        int num = pq.top() - 1;
        pq.pop();
        pq.push(num);
    }
    while(!pq.empty()){
        answer += (long)(pow(pq.top(), 2));
        pq.pop();
    }
    return answer;
}

int main() {
    solution(4, { 4,3,3 });
}
