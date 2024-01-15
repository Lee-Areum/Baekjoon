#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 2;
    while(x <= n){
        answer += x;
        x += 2;
    }
    return answer;
}
