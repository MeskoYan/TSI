package controllers;

import models.*;
import views.FolhaView;

public class PrincipalController {
    public static void main(String[] args) {
        System.out.println("\n");

        FolhaView view = new FolhaView();

        // Instanciando funcionários de cada tipo usando construtores cheios
        Funcionario funcionario = new Funcionario("Carlos", 2000.0);
        Funcionario gerente = new Gerente("Alice", 5000.0, 1500.0);
        Funcionario vendedor = new Vendedor("Bruno", 2500.0, 800.0);

        System.out.println("=== FOLHA DE PAGAMENTO ===\n");
        
        // Mostrando nomes e salários usando a View
        view.exibirFuncionario(funcionario);
        view.exibirFuncionario(gerente);
        view.exibirFuncionario(vendedor);
    }
}
