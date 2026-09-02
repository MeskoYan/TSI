package controller;

import model.Employee;

public class EmployeeController {
    public static void main(String[] args){

        System.out.println("\n");

        //Aqui tá a I
        Employee f1 = new Employee();
        Employee f2 = new Employee();

        //Aqui tá a II
        Employee f3 = new Employee("Yan" , 7000, "Candango");
        Employee f4 = new Employee("Caio" , 7000, "Manager");
        
        //Aqui tá a III
        Employee f5 = new Employee("Lenin" , 100000);
        Employee f6 = new Employee("Erick" , 200000);

        //Aqui tá a IV
        System.out.println(f1 + "\n" + f2 + "\n" + f3 + "\n" + f4 + "\n" + f5 + "\n" + f6 + "\n\n");

        //Aqui tá V
        f1.setName("Hellen");
        f1.setSalary(7000);
        f1.setRole("Home Office");
        f2.setName("Lobato");
        f2.setSalary(7000);
        f2.setRole("Gerente");
        f3.setSalary(5000);
        f4.setSalary(1000000);
        f5.setSalary(200000);
        f5.setRole("Trabalhador");
        f6.setSalary(5000);
        f6.setRole("Analista");

        //Aqui tá a VI
        System.out.println("Name: " + f1.getName() + "     Salary: " + f1.getSalary() + "     Role: " + f1.getRole());
        System.out.println("Name: " + f2.getName() + "     Salary: " + f2.getSalary() + "     Role: " + f2.getRole());
        System.out.println("Name: " + f3.getName() + "     Salary: " + f3.getSalary() + "     Role: " + f3.getRole());
        System.out.println("Name: " + f4.getName() + "     Salary: " + f4.getSalary() + "     Role: " + f4.getRole());
        System.out.println("Name: " + f5.getName() + "     Salary: " + f5.getSalary() + "     Role: " + f5.getRole());
        System.out.println("Name: " + f6.getName() + "     Salary: " + f6.getSalary() + "     Role: " + f6.getRole());

    }
}
