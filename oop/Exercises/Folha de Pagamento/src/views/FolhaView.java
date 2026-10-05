package views;

import models.Funcionario;

public class FolhaView {
    public void exibirFuncionario(Funcionario funcionario) {
        System.out.println("Nome: " + funcionario.getNome());
        System.out.println("Salario Calculado: R$ " + String.format("%.2f", funcionario.calcularSalario()));
        System.out.println("-----------------------------------");
    }
}
