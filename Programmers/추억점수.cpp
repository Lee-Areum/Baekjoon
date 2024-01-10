#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string,int> map;
    for(int i = 0;i<name.size();i++){
        map[name[i]] = yearning[i];
    }
    for(auto pho : photo){
        int sum = 0;
        for(string p : pho){
            sum += map[p];
        }
        answer.push_back(sum);
    }
    return answer;
}
