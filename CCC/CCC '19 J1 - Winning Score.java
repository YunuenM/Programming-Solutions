import java.io.*;
import java.util.*;

public class Main {
    public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws Exception {
        Integer apples = 0, bananas = 0;
        
        for(int i = 0; i < 3; i++){
            Integer temp = Integer.parseInt(br.readLine());
            apples = apples + (3 - i)*temp;
        }
        for(int i = 0; i < 3; i++){
            Integer temp = Integer.parseInt(br.readLine());
            bananas = bananas + (3 - i)*temp;
        }
        
        if(bananas > apples){
            System.out.println("B");
        }
        else if(apples > bananas){
            System.out.println("A");
        }
        else{
            System.out.println("T");
        }
    }
}
