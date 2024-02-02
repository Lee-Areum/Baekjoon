import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for(int i = 0;i<num;i++){
            String answer = "";
            int cnt = sc.nextInt();
            for(int five = 0;five<cnt/5;five++){
                answer += "++++ ";
            }
            for(int one = 0;one < cnt%5; one++){
                answer += "|";
            }
            if(answer.charAt(answer.length() -1) == ' '){
                 answer = answer.substring(0,answer.length() -1);   
            }
            System.out.println(answer);
        }
    }
}
