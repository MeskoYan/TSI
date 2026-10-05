package controllers;

import models.*;
import java.util.ArrayList;
import java.util.List;

public class ContribuinteController {
    public static void main(String[] args) {
        List<Contribuinte> contribuintes = new ArrayList<>();

        // Ana - Pessoa Física (Isenta)
        PessoaFisica pf1 = new PessoaFisica();
        pf1.setNome("Ana");
        pf1.setRendaAnual(15000.0);

        // Carlos - Pessoa Física (25%)
        PessoaFisica pf2 = new PessoaFisica();
        pf2.setNome("Carlos");
        pf2.setRendaAnual(60000.0);

        // Empresa X - Pessoa Jurídica (14%)
        PessoaJuridica pj = new PessoaJuridica();
        pj.setNome("Empresa X");
        pj.setRendaAnual(100000.0);
        pj.setNumeroFuncionarios(15);

        // João MEI - Microempreendedor (sem funcionário)
        Microempreendedor mei1 = new Microempreendedor();
        mei1.setNome("Joao MEI");
        mei1.setRendaAnual(30000.0);
        mei1.setPossuiFuncionario(false);

        // Maria MEI - Microempreendedor (com funcionário, 5%)
        Microempreendedor mei2 = new Microempreendedor();
        mei2.setNome("Maria MEI");
        mei2.setRendaAnual(40000.0);
        mei2.setPossuiFuncionario(true);

        // Lucas - Investidor (Desafio, 30%)
        Investidor inv = new Investidor();
        inv.setNome("Lucas");
        inv.setRendaAnual(80000.0);

        // Armazenando todos os objetos na lista
        contribuintes.add(pf1);
        contribuintes.add(pf2);
        contribuintes.add(pj);
        contribuintes.add(mei1);
        contribuintes.add(mei2);
        contribuintes.add(inv);

        // Percorrendo a lista e exibindo Nome + valor do imposto calculado
        System.out.println("--- Relatório de Impostos ---");
        for (Contribuinte c : contribuintes) {
            System.out.printf("%s - Imposto: %.2f\n", c.getNome(), c.calcularImposto());
        }
    }
}
