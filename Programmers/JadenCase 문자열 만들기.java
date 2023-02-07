class Solution {
    public String solution(String s) {
        String answer = "";
        Boolean flag = true;
        for(int i = 0;i<s.length();i++) {
        	char c = s.charAt(i);
        	if(flag) { //공백 뒤
        		if('a' <= c && c <= 'z') { //소문자
        			c = s.substring(i).toUpperCase().charAt(0);
        		}
        	}else {
        		if('A' <= c && c<= 'Z') { //대문자
        			c = s.substring(i).toLowerCase().charAt(0);
        		}
        	}
            answer += c;
            if(c == ' ') {
            	flag = true;
            }else {
            	flag = false;
            }
        }
        return answer;
    }
}
