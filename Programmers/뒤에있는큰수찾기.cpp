#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer = vector<int>(numbers.size(),-1);
    numbers.push_back(2000001);
    stack<int> st;
    st.push(numbers.size()-1);
    for(int i = 0;i<numbers.size()-1;i++){
        while(numbers[st.top()] < numbers[i]){
            int num = st.top(); st.pop();
            answer[num] = numbers[i];
        }
        st.push(i);
    }
    return answer;
}
