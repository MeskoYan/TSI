package models;

public class Investidor extends Contribuinte {

    public Investidor() {
    }

    public Investidor(String nome, double rendaAnual) {
        super(nome, rendaAnual);
    }

    @Override
    public double calcularImposto() {
        if (rendaAnual <= 10000.0) {
            return rendaAnual * 0.10;
        } else if (rendaAnual <= 50000.0) {
            return rendaAnual * 0.20;
        } else {
            return rendaAnual * 0.30;
        }
    }
}
