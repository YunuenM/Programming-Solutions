import java.io.*;
import java.util.*;

public class Main {
    public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws Exception {
        Integer N = Integer.parseInt(br.readLine());
        Integer counter = 0;
        
        for(int i = 0; i <= N/2; i++){
            int temp = N - i;
            if(temp < 6 && i < 6){
                counter = counter + 1;
            }
        }
        System.out.println(counter);
    }
}
