import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n =sc.nextInt();
        boolean flag = false;
        if(n==0 || n==1){
            flag = true;
        }
        for(int i =2;i<=n/2;i++){
            if (n%i==0) {
                flag = true;
                break;
            }
        }
        if(flag){
            System.out.println("not prime");
        }
        else{
            System.out.println("Prime");
        }
    }
}
