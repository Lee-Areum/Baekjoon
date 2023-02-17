import java.util.*;

class Solution {
    public int solution(int[][] triangle) {
        int answer = 0;
        int before[] = new int[triangle.length];
        int sum[] = new int[triangle.length];
        before[0] = triangle[0][0];
        for(int i = 1;i<triangle.length;i++){
            for(int k = 0;k<i;k++){
                sum[k] = Math.max(before[k] + triangle[i][k],sum[k]);
                sum[k+1] = Math.max(before[k] + triangle[i][k+1],sum[k+1]);
                answer = Math.max(answer, sum[k]);
            }
            before = sum;
            sum = new int[triangle.length];
        }
        return answer;
    }
}
