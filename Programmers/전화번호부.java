import java.util.*;
class Solution {
    public boolean solution(String[] phone_book) {
        Arrays.sort(phone_book);
        if(phone_book.length == 1) return true;
        for(int k = 0;k<phone_book.length-1;k++){
            boolean flag = true;
            for(int i = 0;i<Math.min(phone_book[k].length(), phone_book[k+1].length());i++) {
                if(phone_book[k].charAt(i) != phone_book[k+1].charAt(i)) {
                    flag = false;
                }
            }
            if(flag){
                return false;
            }
        }
        return true;
    }
}
