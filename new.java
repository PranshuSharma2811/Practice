import java.util.ArrayList;
import java.util.List;

class Student {
    private String name;
    private double gpa;

    // Constructor
    public Student(String name, double gpa) {
        this.name = name;
        this.gpa = gpa;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public double getGpa() {
        return gpa;
    }

    // Method to display student information
    public void displayInfo() {
        System.out.printf("Student Name: %-10s | GPA: %.2f%n", name, gpa);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create a list to store Student objects
        List<Student> students = new ArrayList<>();

        // Add students to the list
        students.add(new Student("Alice", 3.9));
        students.add(new Student("Bob", 3.5));
        students.add(new Student("Charlie", 3.8));

        System.out.println("=== Student Roster ===");

        // Iterate through the list using an enhanced for-loop
        for (Student student : students) {
            student.displayInfo();
        }

        // Calculate average GPA
        double totalGpa = 0;
        for (Student student : students) {
            totalGpa += student.getGpa();
        }
        double averageGpa = totalGpa / students.size();

        System.out.println("----------------------");
        System.out.printf("Average GPA: %.2f%n", averageGpa);
    }
}
