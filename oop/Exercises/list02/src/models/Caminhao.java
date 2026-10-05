package models;

public class Caminhao extends Veiculo {
    private double carga;

    public Caminhao() {
    }

    public Caminhao(String modelo, double custoBase, double carga) {
        super(modelo, custoBase);
        this.carga = carga;
    }

    public double getCarga() {
        return carga;
    }

    public void setCarga(double carga) {
        this.carga = carga;
    }

    @Override
    public double calcularCusto(int distancia) {
        return custoBase + (distancia * 1.0) + (carga * 0.2);
    }
}
