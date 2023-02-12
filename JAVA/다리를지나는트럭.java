import java.util.*;

class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        int i = 0;
        int bridgeW = 0;
        Queue<Truck> q = new LinkedList<Truck>();
        while(i < truck_weights.length || !q.isEmpty()){
            while(i<truck_weights.length && bridgeW + truck_weights[i] <= weight){
                if(!q.isEmpty() && q.peek().inTime+bridge_length <= answer){
                    break;
                }
                q.add(new Truck(answer, truck_weights[i]));
                bridgeW += truck_weights[i++];
                answer ++;
            }
            if(!q.isEmpty()){
                Truck t = q.poll();
                answer = t.inTime + bridge_length;
                bridgeW -= t.weight;
            }
        }
        return answer+1;
    }
}

class Truck{
    int inTime;
    int weight;
    
    Truck(int i, int w){
        inTime = i;
        weight = w;
    }
}
