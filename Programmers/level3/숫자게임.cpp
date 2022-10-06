#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    sort(A.begin(), A.end(), greater<>());
    sort(B.begin(), B.end(), greater<>());
    int start = 0, end = B.size()-1;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] >= B[start]) {
            end--;
        }
        else {
            start++;
            answer++;
        }
    }
    return answer;
}
