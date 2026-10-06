package models;

public class Software extends Servico {
    private double valorLicenca;

    public Software() {}

    public double getValorLicenca() { return valorLicenca; }
    public void setValorLicenca(double valorLicenca) { this.valorLicenca = valorLicenca; }

    @Override
    public double calcularCusto() {
        return (horas * 80) + valorLicenca;
    }
}

