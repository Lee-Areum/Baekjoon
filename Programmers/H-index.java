import java.util.Arrays;

class Solution {
    public int solution(int[] citations) {
        int N = citations.length;
        Arrays.sort(citations);
        for(int i = 0 ;i<N;i++) {
        	if(N-i <= citations[i]) {
        		return N-i;
        	}
        }
        return 0;
    }
}
