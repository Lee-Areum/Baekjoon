#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int solution(int x, int y, int n) {
    int answer = 0;
    unordered_map<int,int> visit;
    queue<pair<int,int>> q;
    q.push(pair<int,int>(x,0));
    while(!q.empty()){
        pair<int,int> temp = q.front(); q.pop();
        if(temp.first == y){
            return temp.second;
        }
        visit[temp.first]++;
        if(temp.first+n <= y && visit[temp.first+n] <= 0){
            q.push(pair<int,int>(temp.first+n,temp.second+1));
            visit[temp.first+n]++;
        }
        if(temp.first*2 <= y && visit[temp.first*2] <= 0){
            q.push(pair<int,int>(temp.first*2,temp.second+1));
            visit[temp.first*2]++;
        }
        if(temp.first*3 <= y && visit[temp.first*3] <= 0){
            q.push(pair<int,int>(temp.first*3,temp.second+1));
            visit[temp.first*3]++;
        }
    }
    return -1;
}
