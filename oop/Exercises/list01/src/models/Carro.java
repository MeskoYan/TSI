package models;

public class Carro {
    private String marca;
    private String modelo;
    private int anoFabricacao;
    
    public Carro(){
        //pra quando inicializar com nada
    }
    
    // Construtor parcial
    public Carro(String marca, String modelo) {
        this.marca = marca;
        this.modelo = modelo;
    }

    // Construtor completo
    public Carro(String marca, String modelo, int anoFabricacao){
        this.marca = marca;
        this.modelo = modelo;
        this.anoFabricacao = anoFabricacao;
    }
    
    public String getMarca() {
        return marca;
    }
    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return this.modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getAnoFabricacao() {
        return this.anoFabricacao;
    }
    public void setAnoFabricacao(int anoFabricacao) {
        this.anoFabricacao = anoFabricacao;
    }

    //Aqui é pra fazer o print das infos da classe quando chamar no println
    @Override
    public String toString(){
        return "Marca: " + this.marca + "     Modelo: " + this.modelo + "     Ano de Fabricação: " + this.anoFabricacao;
    }
}