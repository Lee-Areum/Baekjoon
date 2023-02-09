import java.util.*;
class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        for(int i = 0;i<prices.length;i++){
            for(int k = i+1;k<prices.length;k++){
                answer[i]++;
                if(prices[k] < prices[i]){
                    break;
                }
            }
        }
        return answer;
    }
}
