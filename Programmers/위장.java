import java.util.*;
import java.util.Map.Entry;

class Solution {	
	public int solution(String[][] clothes) {
		int answer = 1;
        HashMap<String,Integer> map = new HashMap<String,Integer>();
        for(int i = 0;i<clothes.length;i++) {
        	int cnt = map.get(clothes[i][1]) == null?0:map.get(clothes[i][1]);
        	map.put(clothes[i][1],cnt+1);
        }
        for(Entry<String, Integer> entrySet : map.entrySet()) {
        	answer *= entrySet.getValue()+1;
        }
        return answer-1;
    }
}
