#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    vector<int> list(elements.begin(), elements.end());
    list.insert(list.end(), elements.begin(), elements.end());
    int answer = 0;
    set<int> sets(elements.begin(),elements.end());
    for (int i = 2; i <= elements.size(); i++) {
        int sum = 0;
        for (int k = 0; k < i; k++) {
            sum += elements[k];
        }
        sets.insert(sum);
        for (int k = 1; k <= list.size()-i; k++) {
            sum -= list[k - 1];
            sum += list[k + i-1];
            sets.insert(sum);
        }
    }
    return sets.size();
}
