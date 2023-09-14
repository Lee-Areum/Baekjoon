#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char,int> m;
    for(int i = 0;i<s.size();i++){
        if(m[s[i]]){
            answer.push_back(i-m[s[i]]+1);
        }else{
            answer.push_back(-1);
        }
        m[s[i]] = i+1;
    }
    return answer;
}
