package controllers;

import models.*;
import java.util.ArrayList;
import java.util.List;

public class ServicoController {
    public static void main(String[] args) {
        List<Servico> ordens = new ArrayList<>();

        // Hardware
        Hardware hw = new Hardware();
        hw.setId(1);
        hw.setDescricaoProblema("Computador não liga");
        hw.setHoras(3.0);
        hw.setValorPeca(100.0);

        // Software
        Software sw = new Software();
        sw.setId(2);
        sw.setDescricaoProblema("Sistema apresenta erro");
        sw.setHoras(2.0);
        sw.setValorLicenca(50.0);

        // Rede (Desafio)
        Rede rede = new Rede();
        rede.setId(3);
        rede.setDescricaoProblema("Sem conexao com a internet");
        rede.setHoras(4.0);
        rede.setValorEquipamento(120.0);

        // c) Armazene as ordens em List<Servico>
        ordens.add(hw);
        ordens.add(sw);
        ordens.add(rede); // incluindo a classe do desafio

        // d) Percorra a lista e imprima
        System.out.println("===== ORDENS DE SERVIÇO =====");
        for (Servico s : ordens) {
            System.out.println("OS: " + s.getId());
            System.out.println("Problema: " + s.getDescricaoProblema());
            System.out.println("Horas: " + s.getHoras());
            // Formatando com a vírgula dependendo do Locale, mas para garantir o R$ 250,00 igual o exemplo usarei printf
            System.out.printf("Custo: R$ %.2f\n", s.calcularCusto());
            System.out.println("-----------------------------");
        }
    }
}

