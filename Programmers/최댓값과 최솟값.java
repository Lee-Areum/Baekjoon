import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        String list[] = s.split(" ");
        ArrayList<Integer> list_i = new ArrayList<Integer>();
        for(int i = 0;i<list.length;i++) {
        	list_i.add(Integer.parseInt(list[i]));
        }
        Collections.sort(list_i);
        answer += Integer.toString(list_i.get(0)) + " ";
        answer += Integer.toString(list_i.get(list_i.size()-1));
        return answer;
    }
}
