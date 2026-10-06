package models;

public class Hardware extends Servico {
    private double valorPeca;

    public Hardware() {}

    public double getValorPeca() { return valorPeca; }
    public void setValorPeca(double valorPeca) { this.valorPeca = valorPeca; }

    @Override
    public double calcularCusto() {
        return (horas * 50) + valorPeca;
    }
}

