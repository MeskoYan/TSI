package models;

public class Carro extends Veiculo {

    public Carro() {
    }

    public Carro(String modelo, double custoBase) {
        super(modelo, custoBase);
    }

    @Override
    public double calcularCusto(int distancia) {
        return custoBase + (distancia * 0.5);
    }
}
