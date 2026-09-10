#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    float n1, n2, n3;
    float media(){
        return (n1+n2+n3)/3;
    }
};

int main(){
    Aluno estudante;
    cout << "Digite o nome do aluno: ";
    cin >> estudante.nome;
    cout << "Digite a matrícula do aluno: ";
    cin >> estudante.matricula;
    cout << "Digite a nota 1 do aluno: ";
    cin >> estudante.n1;
    cout << "Digite o nota 2 do aluno: ";
    cin >> estudante.n2;
    cout << "Digite o nota 3 do aluno: ";
    cin >> estudante.n3;

    (estudante.media() >= 7 ? cout << "Media: " << estudante.media() << endl << "Passou!" : cout << "Media: " << estudante.media() << endl << "Não passou!");

    return EXIT_SUCCESS;
}