import java.util.Scanner;

class Account {
    private int id;
    private double balance;
    private double interestRate;

    public Account(int id, double balance, double interestRate) {
        this.id = id;
        this.balance = balance;
        this.interestRate = interestRate;
    }

    public double getBalance() {
        return balance;
    }

    public double getInterestRate() {
        return interestRate;
    }
}

public class Solution {
    
    public static double calculateInterest(Account account, int noOfYears) {
        double initialInterestRate = account.getInterestRate();  // Store initial interest rate
        double balance = account.getBalance();
        double totalInterest = 0.0;

        for (int i = 0; i < noOfYears; i++) {
            double interestForYear = (balance * initialInterestRate) / 100;
            totalInterest += interestForYear;
            initialInterestRate += account.getInterestRate() * 0.10;  // Increase by 10% of the original interest rate
        }

        return totalInterest;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int id = sc.nextInt();
        double balance = sc.nextDouble();
        double interestRate = sc.nextDouble();

        Account account = new Account(id, balance, interestRate);

        int noOfYears = sc.nextInt();

        double interest = calculateInterest(account, noOfYears);
        System.out.printf("%.3f\n", interest);

        sc.close();
    }
}