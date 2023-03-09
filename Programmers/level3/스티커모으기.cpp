#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sticker)
{
    int answer =0;
    //처음 선택
    int prev2 = sticker[0];
    int prev = sticker[0]; 
    for(int i = 2;i<sticker.size()-1;i++){
        prev2 += sticker[i];
        int n = prev2;
        prev2 = prev;
        prev = max(n, prev2);
    }
    answer = max(prev2,prev);
    
    //두번째 선택
    if(sticker.size() == 1) return answer;
    prev2 = 0;
    prev = sticker[1];
    for(int i = 2;i<sticker.size();i++){
        prev2 += sticker[i];
        int n = prev2;
        prev2 = prev;
        prev = max(n, prev2);
    }
    answer = max(answer,max(prev2,prev));
    return answer;
}
