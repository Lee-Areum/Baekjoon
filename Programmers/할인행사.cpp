#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> want_;
map<string, int> wanted;
map<string, int> now;
bool check() {
    for (string w : want_) {
        if (wanted[w] > now[w])
            return false;
    }
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    want_ = want;
    for (int i = 0; i < want.size(); i++) {
        wanted[want[i]] = number[i];
    }
    for (int k = 0; k < 10; k++) {
        now[discount[k]]++;
    }
    if (check()) {
        answer++;
    }
    for (int i = 0; i < discount.size() - 10; i++) {
        now[discount[i]]--;
        now[discount[i + 10]]++;
        if (check()) answer++;
    }
    return answer;
}
