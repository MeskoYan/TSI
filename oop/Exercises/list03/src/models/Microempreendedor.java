package models;

public class Microempreendedor extends Contribuinte {
    private boolean possuiFuncionario;

    public Microempreendedor() {
    }

    public Microempreendedor(String nome, double rendaAnual, boolean possuiFuncionario) {
        super(nome, rendaAnual);
        this.possuiFuncionario = possuiFuncionario;
    }

    public boolean isPossuiFuncionario() {
        return possuiFuncionario;
    }

    public void setPossuiFuncionario(boolean possuiFuncionario) {
        this.possuiFuncionario = possuiFuncionario;
    }

    @Override
    public double calcularImposto() {
        if (!possuiFuncionario) {
            return 1000.0;
        } else {
            return rendaAnual * 0.05;
        }
    }
}
