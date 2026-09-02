package controllers;

import models.Produto;

public class ProdutoController {
    public static void main(String[] args){

        System.out.println("\n");

        //Aqui tá a I
        Produto p1 = new Produto();
        Produto p2 = new Produto();

        //Aqui tá a II
        Produto p3 = new Produto("Placa Mãe", "Placa Mãe X99", 350.50, 15);
        Produto p4 = new Produto("Processador", "Intel Core i5", 800.00, 10);
        
        //Aqui tá a III
        Produto p5 = new Produto("Memória RAM 16GB", 200.00);
        Produto p6 = new Produto("SSD 1TB", 350.00);

        //Aqui tá a IV
        System.out.println(p1 + "\n" + p2 + "\n" + p3 + "\n" + p4 + "\n" + p5 + "\n" + p6 + "\n\n");

        //Aqui tá V
        p1.setNome("Teclado Mecânico");
        p1.setDescricao("Teclado RGB Switch Azul");
        p1.setValor(150.00);
        p1.setEstoque(30);
        
        p2.setNome("Mouse Gamer");
        p2.setDescricao("Mouse sem fio 10000 DPI");
        p2.setValor(250.00);
        p2.setEstoque(25);
        
        p3.setValor(320.00);
        p4.setEstoque(5);
        
        p5.setDescricao("Memória DDR4 3200MHz");
        p5.setEstoque(40);
        
        p6.setDescricao("SSD NVMe M.2");
        p6.setEstoque(20);

        //Aqui tá a VI
        System.out.println("Nome: " + p1.getNome() + " | Descrição: " + p1.getDescricao() + " | Valor: " + p1.getValor() + " | Estoque: " + p1.getEstoque());
        System.out.println("Nome: " + p2.getNome() + " | Descrição: " + p2.getDescricao() + " | Valor: " + p2.getValor() + " | Estoque: " + p2.getEstoque());
        System.out.println("Nome: " + p3.getNome() + " | Descrição: " + p3.getDescricao() + " | Valor: " + p3.getValor() + " | Estoque: " + p3.getEstoque());
        System.out.println("Nome: " + p4.getNome() + " | Descrição: " + p4.getDescricao() + " | Valor: " + p4.getValor() + " | Estoque: " + p4.getEstoque());
        System.out.println("Nome: " + p5.getNome() + " | Descrição: " + p5.getDescricao() + " | Valor: " + p5.getValor() + " | Estoque: " + p5.getEstoque());
        System.out.println("Nome: " + p6.getNome() + " | Descrição: " + p6.getDescricao() + " | Valor: " + p6.getValor() + " | Estoque: " + p6.getEstoque());

    }
}