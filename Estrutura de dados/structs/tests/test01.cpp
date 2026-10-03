#include <iostream>

using namespace std;

struct aluno {
    int matricula;
    //char nome[50] = "aaaaaaa" <- Aqui é inline
    string nome;
    aluno (int m = 0, string n = ""){
        matricula = m;
        nome = n;
    }

    /*
        Construtor maneira 1
        aluno(int m = 0, string n = ""){
            matricula = m;
            nome = n
        }

        Construtor maneira 2

        aluno(){
            matricula = 0;
            nome = "";
        }
    */
} a, b;
//Aqui a struct cria a e b já com os defaults, mas aí fica global;

int main(){
    aluno x, y;

    x.matricula = 1234;
    x.nome = "Yan";
    cout << "Matricula: " << x.matricula << endl << "Nome: " << x.nome << endl;
    a.nome = "oi";
    cout << a.nome;
    return 0;
}