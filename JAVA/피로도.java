class Solution {
    int answer = 0;
    public int solution(int k, int[][] dungeons) {
        bfs(0,0,dungeons,new boolean[dungeons.length],k);
        return answer;
    }
    
    public void bfs(int index, int cnt, int[][] dungeons, boolean[] visit, int now){
        if(index == dungeons.length){
            if(answer < cnt){
                answer = cnt;
            }
            return;
        }
        for(int i = 0;i<dungeons.length;i++){
            if(!visit[i]){
                if(dungeons[i][0] <= now){
                    visit[i] = true;
                    bfs(index+1,cnt+1,dungeons,visit,now-dungeons[i][1]);
                    visit[i] = false;
                }
                bfs(index+1,cnt,dungeons,visit,now);
            }
        }
    }
}
