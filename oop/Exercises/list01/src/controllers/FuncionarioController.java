package controllers;

import models.*;

public class FuncionarioController {
    public static void main(String[] args){

        System.out.println("\n");

        //Aqui tá a I
        Funcionario f1 = new Funcionario();
        Funcionario f2 = new Funcionario();

        //Aqui tá a II
        Funcionario f3 = new Funcionario("Yan" , 7000, "Candango");
        Funcionario f4 = new Funcionario("Caio" , 7000, "Manager");
        
        //Aqui tá a III
        Funcionario f5 = new Funcionario("Lenin" , 100000);
        Funcionario f6 = new Funcionario("Erick" , 200000);

        //Aqui tá a IV
        System.out.println(f1 + "\n" + f2 + "\n" + f3 + "\n" + f4 + "\n" + f5 + "\n" + f6 + "\n\n");

        //Aqui tá V
        f1.setNome("Hellen");
        f1.setSalario(7000);
        f1.setCargo("Home Office");
        f2.setNome("Lobato");
        f2.setSalario(7000);
        f2.setCargo("Gerente");
        f3.setSalario(5000);
        f4.setSalario(1000000);
        f5.setSalario(200000);
        f5.setCargo("Trabalhador");
        f6.setSalario(5000);
        f6.setCargo("Analista");

        //Aqui tá a VI
        System.out.println("Nome: " + f1.getNome() + "     Salario: " + f1.getSalario() + "     Cargo: " + f1.getCargo());
        System.out.println("Nome: " + f2.getNome() + "     Salario: " + f2.getSalario() + "     Cargo: " + f2.getCargo());
        System.out.println("Nome: " + f3.getNome() + "     Salario: " + f3.getSalario() + "     Cargo: " + f3.getCargo());
        System.out.println("Nome: " + f4.getNome() + "     Salario: " + f4.getSalario() + "     Cargo: " + f4.getCargo());
        System.out.println("Nome: " + f5.getNome() + "     Salario: " + f5.getSalario() + "     Cargo: " + f5.getCargo());
        System.out.println("Nome: " + f6.getNome() + "     Salario: " + f6.getSalario() + "     Cargo: " + f6.getCargo());

    }
}
