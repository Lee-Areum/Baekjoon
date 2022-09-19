#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    for (int i = n; i > 1; i--) {
        if (s / i == 0) return { -1 };
        answer.push_back(s / i);
        s -= s / i;
    }
    answer.push_back(s);
    sort(answer.begin(), answer.end());
    return answer;
}
