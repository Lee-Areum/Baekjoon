import java.util.*;

class Solution {
    public String solution(int[] numbers) {
        String answer = "";
        ArrayList<String> list = new ArrayList<String>();
        for(int n : numbers) {
        	list.add(Integer.toString(n));
        }
        Collections.sort(list,
        	new Comparator<String>(){
	        	@Override
	        	public int compare(String a, String b) {
	        		return (a+b).compareTo(b+a);
	        	}
	        }
        );
        for(int i = list.size()-1;i>=0;i--) {
        	answer += list.get(i);
        }
        if(answer.charAt(0) == '0') return "0";
        return answer;
    }
}
