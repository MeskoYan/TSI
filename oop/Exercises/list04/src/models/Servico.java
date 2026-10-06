package models;

public abstract class Servico {
    protected int id;
    protected String descricaoProblema;
    protected double horas;

    public Servico() {}

    public int getId() { return id; }
    public void setId(int id) { this.id = id; }

    public String getDescricaoProblema() { return descricaoProblema; }
    public void setDescricaoProblema(String descricaoProblema) { this.descricaoProblema = descricaoProblema; }

    public double getHoras() { return horas; }
    public void setHoras(double horas) { this.horas = horas; }

    public abstract double calcularCusto();
}

