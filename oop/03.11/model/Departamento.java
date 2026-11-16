import java.utils.ArrayList;

public class Department{
    private String name;
    private List<Professor> professors = new ArrayList<>();

    public Department() {}

    public Department(String name, Professor professor) {
        this.name = name;
        this.professors.add(professor);
        professor.setDepartment(this);
    }

    public Department(String name, List<Professor> professors) {
        this.name = name;
        this.professors.addAll(professors);
        for (Professor professor : professors) {
            professor.setDepartment(this);
        }
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public List<Professor> getProfessors() {
        return this.professors;
    }

    public void addProfessor(Professor professor) {
        this.professors.add(professor);
        professor.setDepartment(this);
    }

    public void removeprofessor(Professor professor) {
        this.professors.remove(professor);
        professor.setDepartment(null);
    }

    //Finished

}