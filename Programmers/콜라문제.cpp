#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while(n >= a){
        int input = n/a;
        n = n - input*a + input*b;
        answer += input * b;
    }
    return answer;
}
