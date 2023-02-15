import java.util.*;

class Solution {
    List<String> list = new ArrayList<String>();
    public int solution(String word) {
        dfs(0,"");
        return list.indexOf(word);
    }
    
    public void dfs(int index, String str){
        if(index > 5) return;
        list.add(str);
        for(int i = 0;i<5;i++){
            dfs(index+1,str + "AEIOU".charAt(i));
        }
    }
}
