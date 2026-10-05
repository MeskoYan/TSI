package models;

public abstract class Veiculo {
    private String modelo;
    protected double custoBase;

    public Veiculo() {
    }

    public Veiculo(String modelo, double custoBase) {
        this.modelo = modelo;
        this.custoBase = custoBase;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public double getCustoBase() {
        return custoBase;
    }

    public void setCustoBase(double custoBase) {
        this.custoBase = custoBase;
    }

    public abstract double calcularCusto(int distancia);
}
