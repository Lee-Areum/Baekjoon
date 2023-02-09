import java.util.*;
class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        ArrayList<Integer> needsDays = new ArrayList<Integer>();
        for(int i = 0;i<progresses.length;i++) {
        	needsDays.add((progresses[i]+speeds[i]-1)/speeds[i]);
        }
        int quick = needsDays.get(0);
        int cnt = 1;
        ArrayList<Integer> ans = new ArrayList<Integer>();
        for(int i = 1;i<needsDays.size();i++) {
        	if(quick <= needsDays.get(i)) {
        		cnt ++;
        	}else {
        		ans.add(cnt);
        		cnt = 1;
        		quick = needsDays.get(i);
        	}
        }
        if(cnt > 1) {
        	ans.add(cnt);
        }
        int[] answer = ans.stream().mapToInt(Integer::intValue).toArray();
        return answer;
    }
}
