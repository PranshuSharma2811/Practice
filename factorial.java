import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
         long result =1 ;

        for(int i = 1;i<=n;i++){
                result*=i;
        }
        System.out.println(result);
    }
}
