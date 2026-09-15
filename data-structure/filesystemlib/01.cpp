/*
1. Criar e escrever em um arquivo

    Crie um programa que:

        Abra (ou crie) um arquivo chamado dados.txt

        Escreva nele três linhas de texto

        Feche o arquivo

        Exiba na tela uma mensagem confirmando a escrita
*/

#include <iostream>
#include <fstream>

using namespace std;

int main () { 

    ofstream arquivo("01.txt");
    if(!arquivo.is_open()){
        cout << "Ops, houve um erro!";
        return EXIT_FAILURE;
    }

    arquivo << "Hello files!";

    arquivo.close();

    cout << "Escrito com sucesso!";

    return EXIT_SUCCESS;
}