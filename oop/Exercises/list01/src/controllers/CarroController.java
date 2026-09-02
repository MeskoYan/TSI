package controllers;

import models.Carro;

public class CarroController {
    public static void main(String[] args){

        System.out.println("\n");

        //Aqui tá a I
        Carro c1 = new Carro();
        Carro c2 = new Carro();

        //Aqui tá a II
        Carro c3 = new Carro("Ford", "Fiesta", 2015);
        Carro c4 = new Carro("Chevrolet", "Onix", 2018);
        
        //Aqui tá a III
        Carro c5 = new Carro("Fiat", "Palio");
        Carro c6 = new Carro("Honda", "Civic");

        //Aqui tá a IV
        System.out.println(c1 + "\n" + c2 + "\n" + c3 + "\n" + c4 + "\n" + c5 + "\n" + c6 + "\n\n");

        //Aqui tá V
        c1.setMarca("Volkswagen");
        c1.setModelo("Gol");
        c1.setAnoFabricacao(2012);
        
        c2.setMarca("Toyota");
        c2.setModelo("Corolla");
        c2.setAnoFabricacao(2022);
        
        c3.setAnoFabricacao(2016); // Atualizando o ano
        c4.setAnoFabricacao(2019);
        
        c5.setAnoFabricacao(2014); // Preenchendo o dado faltante
        c6.setAnoFabricacao(2021);

        //Aqui tá a VI
        System.out.println("Marca: " + c1.getMarca() + "     Modelo: " + c1.getModelo() + "     Ano: " + c1.getAnoFabricacao());
        System.out.println("Marca: " + c2.getMarca() + "     Modelo: " + c2.getModelo() + "     Ano: " + c2.getAnoFabricacao());
        System.out.println("Marca: " + c3.getMarca() + "     Modelo: " + c3.getModelo() + "     Ano: " + c3.getAnoFabricacao());
        System.out.println("Marca: " + c4.getMarca() + "     Modelo: " + c4.getModelo() + "     Ano: " + c4.getAnoFabricacao());
        System.out.println("Marca: " + c5.getMarca() + "     Modelo: " + c5.getModelo() + "     Ano: " + c5.getAnoFabricacao());
        System.out.println("Marca: " + c6.getMarca() + "     Modelo: " + c6.getModelo() + "     Ano: " + c6.getAnoFabricacao());

    }
}