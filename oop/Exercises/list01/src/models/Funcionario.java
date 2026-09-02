package models;

public class Funcionario{
    private String nome;
    private double salario;
    private String cargo;
    
    public Funcionario(){
        //pra quando inicializar com nada
    }
    
    public Funcionario(String nome, double salario) {
        this.nome = nome;
        this.salario = salario;
    }

    public Funcionario(String nome, double salario, String cargo){
        this.nome = nome;
        this.salario = salario;
        this.cargo = cargo;
    }
    
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalario() {
        return this.salario;
    }
    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getCargo() {
        return this.cargo;
    }
    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    

    //Aqui é pra fazer o print das infos da classe quando chamar no println
    @Override
    public String toString(){
        return "nome: " + this.nome + "     salario: " + this.salario + "     cargo: " + this.cargo;
    }
   
}