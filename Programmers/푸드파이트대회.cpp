#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";
    for(int i = food.size()-1;i>=0;i--){
        if(food[i] >1){
            for(int k = 0;k<food[i]/2;k++){
                answer = to_string(i)+answer+to_string(i);
            }
        }
    }
    return answer;
}
