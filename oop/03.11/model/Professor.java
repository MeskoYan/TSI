public class Professor {
    private String name;
    private Department department;
    private Disciplina disciplina;

    public Professor(){}

    public Professor(String name) {
        this.name = name;
    }

    public Professor(String name, Department department) {
        this.name = name;

        this.department = department;
        department.addProfessor(this);
    }

    public Professor(String name, Department department, Disciplina disciplina) {
        this.name = name;

        this.department = department;
        department.addProfessor(this);

        this.disciplina = disciplina;
        disciplina.setProfessor(this);
    }

    public String getName() {
        return name;
    }

    public String getDepartment() {
        return department;
    }

    public void setDepartment(Department department) {
        this.department = department;
        department.addProfessor(this);
    }

    public void removeDepartment() {
        this.department = null;
        department.removeProfessor(this);
    }

    public void setDisciplina(Disciplina disciplina) {
        this.disciplina = disciplina;
        disciplina.setProfessor(this);
    }

    public void removeDisciplina(Disciplina disciplina) {
        this.disciplina = null;
        disciplina.removeProfessor(this);
    }
}