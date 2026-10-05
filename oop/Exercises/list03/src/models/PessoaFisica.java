package models;

public class PessoaFisica extends Contribuinte {

    public PessoaFisica() {
    }

    public PessoaFisica(String nome, double rendaAnual) {
        super(nome, rendaAnual);
    }

    @Override
    public double calcularImposto() {
        if (rendaAnual < 20000.0) {
            return 0.0;
        } else if (rendaAnual <= 50000.0) {
            return rendaAnual * 0.15;
        } else {
            return rendaAnual * 0.25;
        }
    }
}
