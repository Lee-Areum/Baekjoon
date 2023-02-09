import java.util.*;

class Solution {
    boolean solution(String s) {
        Stack<Character> st = new Stack<Character>();
        for(char c : s.toCharArray()) {
        	if(c == '(') {
        		st.push(c);
        	}else {
        		if(st.empty()) {
        			return false;
        		}else {
        			st.pop();
        		}
        	}
        }
        return st.empty();
    }
}
