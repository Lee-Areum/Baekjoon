import java.util.*;
class Solution {
    public int solution(int n, int[][] edge) {
        ArrayList<Integer> board[] = new ArrayList[n+1];
        for(int i = 1;i<=n;i++){
            board[i] = new ArrayList<Integer>();
        }
        for(int i = 0;i<edge.length;i++){
            board[edge[i][0]].add(edge[i][1]);
            board[edge[i][1]].add(edge[i][0]);
        }
        Queue<Pair> q = new LinkedList<Pair>();
        boolean visited[] = new boolean[n+1];
        q.add(new Pair(1,0));
        visited[1] = true;
        int max = 0; int answer = 0;
        while(!q.isEmpty()){
            Pair p = q.poll();
            if(p.cnt > max){
                max = p.cnt;
                answer = 1;
            }else if(p.cnt == max){
                answer++;
            }
            for(int i : board[p.n]){
                if(!visited[i]){
                    visited[i] = true;
                    q.add(new Pair(i,p.cnt+1));
                }
            }
        }
        return answer;
    }
}
class Pair{
    int n;
    int cnt;
    Pair(int n, int cnt){
        this.n = n;
        this.cnt = cnt;
    }
}
