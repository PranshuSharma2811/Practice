import java.util.Scanner;

public class calculator {
    public static void main(String[] args){
        String yn;
        do{
            Scanner s = new Scanner(System.in);

            System.out.println("Enter your first number");
            int no1 = s.nextInt();
            
            System.out.println("Enter your second number");
            int no2 = s.nextInt();

            System.out.println("Enter which operator you wanna do +,-,*,/");
            String operator = s.next();

            int result;
            switch(operator){
                case "+" : result = no1+no2;
                            System.out.println("Addition of these two numbers is = "+ result);
                            break;
                case "-" : result = no1-no2;
                            System.out.println("Substractio of these two numbers is = "+ result);
                            break;
                case "*" : result = no1*no2;
                            System.out.println("Multiplacation of these two numbers is = "+ result);
                            break;
                case "/" : result = no1/no2;
                            System.out.println("Division of these two numbers is = "+ result);
                            break;
                default : System.out.println("Enter a valid operator");
                            break;       
            }
            System.out.println("Do you still wanna continue (press y for Yes and n for No)");
            
            yn=s.next();
            
        }while(yn.equals("y")||yn.equals("Y"));
    }

}
