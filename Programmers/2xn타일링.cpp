#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> dp = { 0 ,1,2};
    for (int i = 3; i <= n; i++) {
        int n = dp[i - 1] + dp[i - 2];
        dp.push_back(n%1000000007);
    }
    return dp[n];
}
