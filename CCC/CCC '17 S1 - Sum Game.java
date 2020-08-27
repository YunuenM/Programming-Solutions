import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner read = new Scanner(System.in);
        int N = read.nextInt();
        int[] sw = new int[N], se = new int[N];
        int biggest = -1, s1 = 0, s2 = 0;
        
        for(int i = 0; i < N; i++){
            sw[i] = read.nextInt();
        }
        for(int i = 0; i < N; i++){
            se[i] = read.nextInt();
        }
        
        for(int i = 0; i < N; i++){
            s1 += sw[i];
            s2 += se[i];
            if(s1 == s2){
                biggest = i;
            }
        }
        System.out.println(biggest+1);
    }
}
