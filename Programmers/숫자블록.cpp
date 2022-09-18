#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(long long begin, long long end) {
    vector<int> answer;
    for (long long i = begin; i <= end; i++) {
        bool notCan = true;
        for (long long k = 2; k <= sqrt(i); k++) {
            if (i / k > 10000000) continue;
            if (i % k == 0) {
                notCan = false;
                answer.push_back(i / k);
                break;
            }
        }
        if (notCan) {
            int n = (i == 1) ? 0 : 1;
            answer.push_back(n);
        }
    }

    return answer;
}
