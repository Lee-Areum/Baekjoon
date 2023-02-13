import java.util.*;

class Solution {
    int dx[] = {-1,1,0,0};
    int dy[] = {0,0,1,-1};
    public int solution(int[][] maps) {
        Queue<Pair> q = new LinkedList<Pair>();
        q.add(new Pair(0,0));
        maps[0][0] = 2;
        int N = maps.length;
        int M = maps[0].length;
        while(!q.isEmpty()){
            int x = q.peek().x;
            int y = q.poll().y;
            if(x == N-1 && y == M-1){
                return maps[x][y]-1;
            }
            for(int i = 0;i<4;i++){
                int xx = x + dx[i];
                int yy = y + dy[i];
                if(0<=xx && xx< N && 0<= yy && yy<M){
                    if(maps[xx][yy] != 0 && (maps[x][y]+1 < maps[xx][yy] || maps[xx][yy] == 1)){
                        maps[xx][yy] = maps[x][y]+1;
                        q.add(new Pair(xx,yy));
                    }
                }
            }
        }
        return -1;
    }
    
    public void bfs(int x, int y, int[][] maps){
    }
}

class Pair{
    int x;
    int y;
    Pair(int _x, int _y){
        x = _x;
        y = _y;
    }
}
