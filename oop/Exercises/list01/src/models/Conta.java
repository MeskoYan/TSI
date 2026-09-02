package models;

public class Conta {
    // Note que no PDF está escrito "doiuble", mas foi um erro de digitação do material. O correto é double[cite: 1].
    private double saldo; 
    
    public Conta(){
        //pra quando inicializar com nada (saldo começa em 0.0)
    }
    
    // Construtor completo
    public Conta(double saldo) {
        this.saldo = saldo;
    }
    
    public double getSaldo() {
        return this.saldo;
    }
    
    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    // --- Métodos de comportamento exigidos pelo diagrama ---
    public void deposita(double valor) {
        this.saldo += valor;
    }

    public void saca(double valor) {
        this.saldo -= valor;
    }

    public void atualiza(double taxa) {
        // Aumenta o saldo com base em uma taxa (ex: 0.10 para 10%)
        this.saldo += (this.saldo * taxa);
    }
    // -------------------------------------------------------

    //Aqui é pra fazer o print das infos da classe quando chamar no println
    @Override
    public String toString(){
        return "Saldo atual: R$ " + this.saldo;
    }
}