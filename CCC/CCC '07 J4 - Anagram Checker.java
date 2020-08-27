import java.util.*;

public class Main {
    public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws Exception {
        String one = br.readLine();
        String two = br.readLine();
        one = one.replaceAll(" ", "");
        two = two.replaceAll(" ", "");
        char[] o = one.toCharArray();
        char[] t = two.toCharArray();
        Arrays.sort(o);
        Arrays.sort(t);
        boolean work = true;
        
        if(one.length() != two.length()){
            work = false;
        }
        else{
            for(int i = 0; i < two.length(); i++){
                if(o[i] != t[i]){
                    work = false;
                    break;
                }
            }
        }
        
        System.out.println(work ? "Is an anagram." : "Is not an anagram.");
    }
}
