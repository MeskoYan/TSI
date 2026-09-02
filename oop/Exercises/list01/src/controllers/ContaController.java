package controllers;

import models.Conta;

public class ContaController {
    public static void main(String[] args){

        System.out.println("\n");

        //Aqui tá a I
        Conta c1 = new Conta();
        Conta c2 = new Conta();

        //Aqui tá a II
        Conta c3 = new Conta(1500.50);
        Conta c4 = new Conta(3000.00);
        
        //Aqui tá a III
        Conta c5 = new Conta(250.00);
        Conta c6 = new Conta(10000.00);

        //Aqui tá a IV
        System.out.println("c1 - " + c1 + "\nc2 - " + c2 + "\nc3 - " + c3 + "\nc4 - " + c4 + "\nc5 - " + c5 + "\nc6 - " + c6 + "\n\n");

        //Aqui tá V
        
        c1.setSaldo(500.00); 
        c2.setSaldo(1200.00);
        
        c3.deposita(500.00);
        c4.saca(1000.00);
        
        c5.atualiza(0.10);
        c6.saca(5000.00);

        //Aqui tá a VI
        System.out.println("Saldo da c1: R$ " + c1.getSaldo());
        System.out.println("Saldo da c2: R$ " + c2.getSaldo());
        System.out.println("Saldo da c3: R$ " + c3.getSaldo());
        System.out.println("Saldo da c4: R$ " + c4.getSaldo());
        System.out.println("Saldo da c5: R$ " + c5.getSaldo());
        System.out.println("Saldo da c6: R$ " + c6.getSaldo());

    }
}