#include <iostream>
#include <string.h>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main(){

    Pessoa p1;
    cout << "Digite um nome: ";
    cin >> p1.nome;
    cout << "Digite uma idade: ";
    cin >> p1.idade;
    cout << "Digite altura: ";
    cin >> p1.altura;

    cout << endl << "Nome: " << p1.nome << endl;
    cout << "Idade: " << p1.idade << "anos" << endl;
    cout << "Altura: " << p1.altura << " m" << endl;
    
    
    return 0;
}