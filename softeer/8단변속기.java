import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String[] list = str.split(" ");
        boolean desc = Integer.parseInt(list[0]) == 8;
        int flag = desc ? 1 : 0;
        for(int i = 1;i<8;i++){
            if(desc){
                if( Integer.parseInt(list[i]) != Integer.parseInt(list[i-1])-1){
                    flag = -1;
                    break;
                }
            }else{
                if( Integer.parseInt(list[i]) != Integer.parseInt(list[i-1])+1){
                    flag = -1;
                    break;
                }         
            }
        }
        if(flag == 0){
            System.out.println("ascending");
        }else if(flag == 1){
            System.out.println("descending");
        }else{
            System.out.println("mixed");
        }
    }
}
