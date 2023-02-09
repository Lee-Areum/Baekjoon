import java.util.*;

class Solution {
    public int solution(int[] priorities, int location) {
    	int[] sorted = priorities.clone();
    	Arrays.sort(sorted);
    	int sIndex = sorted.length-1;
    	int index = 0;
    	boolean[] visited = new boolean[priorities.length];
        while(sIndex >= 0){
            if(index == priorities.length){
                index = 0;
            }
            if(!visited[index] && sorted[sIndex] == priorities[index]){
                visited[index] = true;
                if(index == location) {
                    return priorities.length - sIndex;
                }
                sIndex--; 
            }
            index++;
        }
        return -1;
    }
}
