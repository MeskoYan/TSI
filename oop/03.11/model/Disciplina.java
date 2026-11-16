public class Disciplina {
    private String nome;
    private Professor professor;
    private List<Aluno> alunos = new ArrayList<>();

    public Disciplina() {}

    public Disciplina(String nome, Professor professor) {
        this.nome = nome;
        this.professor = professor;
        professor.setDisciplina(this);
    }

    public Disciplina(String nome, Professor professor, Aluno aluno){
        this.nome = nome;

        this.professor = professor;
        professor.setDisciplina(this);

        this.alunos.add(aluno);
        //aluno.setDisciplina(this);
    }

    public Disciplina(String nome, Professor professor, List<Aluno> alunos){
        this.nome = nome;

        this.professor = professor;
        professor.setDisciplina(this);

        this.alunos = addAll(alunos);
    }

    public String getName() {
        return nome;
    }
    public void setName(String nome) {
        this.nome = nome;
    }

    public Professor getProfessor() {
        return professor;
    }

    public void setProfessor(Professor professor) {
        this.professor = professor;
        professor.setDisciplina(this);
    }

    public void removeProfessor() {
        this.professor = null;
        professor.removeDisciplina(this);
    }

}