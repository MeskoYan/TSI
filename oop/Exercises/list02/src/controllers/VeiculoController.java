package controllers;

import java.util.ArrayList;
import java.util.List;
import models.Carro;
import models.Caminhao;
import models.Onibus;
import models.Veiculo;

public class VeiculoController {
    public static void main(String[] args) {
        
        System.out.println("\n");

        // a) Instancie: 1 Carro, 1 Caminhão (Adicionei o Ônibus do desafio)
        Carro carro = new Carro();
        Caminhao caminhao = new Caminhao();
        Onibus onibus = new Onibus();

        // b) Utilize setters para definir valores
        carro.setModelo("Carro");
        carro.setCustoBase(20.0);

        caminhao.setModelo("Caminhao");
        caminhao.setCustoBase(30.0);
        caminhao.setCarga(50.0);

        onibus.setModelo("Onibus");
        onibus.setCustoBase(40.0);
        onibus.setCarga(20.0);

        // c) Armazene os objetos em: List<Veiculo>
        List<Veiculo> frota = new ArrayList<>();
        frota.add(carro);
        frota.add(caminhao);
        frota.add(onibus);

        // d) Percorra a lista e imprima: Modelo + custo da viagem (distância = 100)
        int distanciaViagem = 100;
        
        for (Veiculo v : frota) {
            System.out.println(v.getModelo() + " - Custo: " + v.calcularCusto(distanciaViagem));
        }
        
        System.out.println("\n");
    }
}
