package models;

public class Rede extends Servico {
    private double valorEquipamento;

    public Rede() {}

    public double getValorEquipamento() { return valorEquipamento; }
    public void setValorEquipamento(double valorEquipamento) { this.valorEquipamento = valorEquipamento; }

    @Override
    public double calcularCusto() {
        return (horas * 60) + valorEquipamento;
    }
}

