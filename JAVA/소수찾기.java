import java.util.*;

class Solution {
    HashSet<Integer> set = new HashSet<Integer>();
    public int solution(String numbers) {
        int answer = 0;
        for(int i = 1;i<=numbers.length();i++){
            bfs(new boolean[numbers.length()],0,numbers.length(),i,numbers,"",0);
        }
        for(int n : set){
        System.out.println(n);
            if(sosu(n)) {
                System.out.println("sosu");
                answer++;
            }
        }
        return answer;
    }
    
    public void bfs(boolean[] checked, int cnt, int N, int R, String numbers, String answer,int index){
        if(cnt == R){
            set.add(Integer.parseInt(answer));
            return;
        }
        if(index == N) return;
        bfs(checked,cnt,N,R,numbers,answer,index+1);
        for(int i = 0;i<N;i++){
            if(!checked[i]){
                checked[i] = true;
                bfs(checked,cnt+1,N,R,numbers,answer+numbers.charAt(i),index+1);
                checked[i] = false;
            }
        }
    }
    
    public boolean sosu(int n){
        if(n < 2) return false;
        if(n < 4) return true;
        for(int i = 2;i<=Math.sqrt(n);i++){
            if(n%i == 0) return false;
        }
        return true;
    }
}
