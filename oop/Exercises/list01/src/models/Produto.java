package models;

public class Produto {
    private String nome;
    private String descricao;
    private double valor;
    private int estoque;
    
    public Produto(){
        //pra quando inicializar com nada
    }
    
    // Construtor parcial (sem a descrição e o estoque)
    public Produto(String nome, double valor) {
        this.nome = nome;
        this.valor = valor;
    }

    // Construtor completo
    public Produto(String nome, String descricao, double valor, int estoque){
        this.nome = nome;
        this.descricao = descricao;
        this.valor = valor;
        this.estoque = estoque;
    }
    
    public String getNome() {
        return this.nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDescricao() {
        return this.descricao;
    }
    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public double getValor() {
        return this.valor;
    }
    public void setValor(double valor) {
        this.valor = valor;
    }

    public int getEstoque() {
        return this.estoque;
    }
    public void setEstoque(int estoque) {
        this.estoque = estoque;
    }

    //Aqui é pra fazer o print das infos da classe quando chamar no println
    @Override
    public String toString(){
        return "Produto: " + this.nome + "     Descrição: " + this.descricao + "     Valor: R$" + this.valor + "     Estoque: " + this.estoque;
    }
}