#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    priority_queue<int> pq(score.begin(),score.end());
    for(int i = 0;i<score.size()/m;i++){
        int min = 0;
        for(int k = 0;k<m;k++){
            min = pq.top(); pq.pop();
        }
        answer += (min *m);
    }
    return answer;
}
