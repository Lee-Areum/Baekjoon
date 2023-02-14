import java.util.*;
class Solution {
    public int solution(int n, int[][] wires) {
        int answer = 1000000;
        int board[][] = new int[n+1][n+1];
        for(int i = 0;i<wires.length;i++){
            board[wires[i][0]][wires[i][1]]  = 1;
            board[wires[i][1]][wires[i][0]]  = 1;
        }
        for(int i = 0;i<wires.length;i++){
            board[wires[i][0]][wires[i][1]]  = 0;
            board[wires[i][1]][wires[i][0]]  = 0;
            int left = connect(wires[i][0],n, board);
            int right = connect(wires[i][1],n, board);
            if(answer > Math.abs(left - right)){
                answer = Math.abs(left - right);
            }
            board[wires[i][0]][wires[i][1]]  = 1;
            board[wires[i][1]][wires[i][0]]  = 1;
        }
        return answer;
    }
    
    public int connect(int start, int n, int[][] connection){
        int cnt = 1;
        boolean visited[] = new boolean[n+1];
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(start);
        visited[start] = true;
        while(!q.isEmpty()){
            int p = q.poll();
            for(int i = 1;i<=n;i++){
                if(!visited[i] && connection[p][i] > 0){
                    visited[i] = true;
                    q.add(i);
                    cnt++;
                }
            }
        }
        return cnt;
    }
}
