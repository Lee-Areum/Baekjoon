import java.util.*;

class Solution {
    public int solution(String begin, String target, String[] words) {
        int answer = 0;
        Queue<Pair> q = new LinkedList<Pair>();
        boolean visit[] = new boolean[words.length];
        q.add(new Pair(begin,0));
        while(!q.isEmpty()){
            Pair p = q.poll();
            if(p.str.compareTo(target) == 0){
                answer = p.cnt;
                break;
            }
            for(int i = 0;i<words.length;i++){
                if(!visit[i] && countDiff(words[i],p.str)){
                    visit[i] = true;
                    q.add(new Pair(words[i],p.cnt+1));
                }
            }
        }
        
        return answer;
    }
    
    public boolean countDiff(String s1, String s2){
        int cnt = 0;
        for(int i = 0;i<s1.length();i++){
            if(s1.charAt(i) != s2.charAt(i)){
                cnt++;
            }
        }
        return cnt <= 1;
    }
}

class Pair{
    String str;
    int cnt;
    
    Pair(String s, int c){
        str = s;
        cnt = c;
    }
}
