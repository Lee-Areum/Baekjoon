class Solution {
    int answer = 0;
    public int solution(int[] numbers, int target) {
        bfs(0,0,target,numbers);
        return answer;
    }
    
    public void bfs(int index, int sum, int target, int[] numbers){
        if(index == numbers.length){
            if(sum == target){
                answer++;
            }
            return;
        }
        bfs(index+1,sum+numbers[index],target,numbers);
        bfs(index+1,sum-numbers[index],target,numbers);
    }
}
