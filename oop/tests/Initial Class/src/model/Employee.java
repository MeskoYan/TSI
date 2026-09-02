package model;

public class Employee{
    private String name;
    private double salary;
    private String role;
    
    public Employee(){
        //pra quando inicializar com nada
    }
    
    public Employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    public Employee(String name, double salary, String role){
        this.name = name;
        this.salary = salary;
        this.role = role;
    }
    
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }

    public double getSalary() {
        return this.salary;
    }
    public void setSalary(double salary) {
        this.salary = salary;
    }

    public String getRole() {
        return this.role;
    }
    public void setRole(String role) {
        this.role = role;
    }

    

    //Aqui é pra fazer o print das infos da classe quando chamar no println
    @Override
    public String toString(){
        return "Name: " + this.name + "     Salary: " + this.salary + "     Role: " + this.role;
    }
   
}