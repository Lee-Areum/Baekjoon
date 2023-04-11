#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> n1, pair<int,int> n2) {
    return n1.second > n2.second;
} 
 
int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> m;
    for(int n : tangerine) {
        m[n]++;
    }
    vector<pair<int,int>> list(m.begin(),m.end());
    sort(list.begin(),list.end(),compare);
    while(k > 0) {
        k -= list[answer++].second;
    }
    return answer;
}
