import java.utils.ArrayList;

public class Main {
    public static void main(String[] args) {
        Department department = new Department("Computer Science");
        Professor professor = new Professor("Dr. Johnson");
        Disciplina disciplina = new Disciplina("Data Structures");

        System.out.println("Department: " + department.getName());
        System.out.println("Professor: " + professor.getName());
        System.out.println("Disciplina: " + disciplina.getName());
    }
}