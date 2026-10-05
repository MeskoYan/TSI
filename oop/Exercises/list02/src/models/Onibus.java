package models;

public class Onibus extends Veiculo {
    private double carga;

    public Onibus() {
    }

    public Onibus(String modelo, double custoBase, double carga) {
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
        return custoBase + (distancia * 0.8) + (carga * 0.1);
    }
}
