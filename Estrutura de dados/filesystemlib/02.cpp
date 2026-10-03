/*
2. Ler e exibir conteúdo de um arquivo

    Crie um programa que:

        Abra o arquivo dados.txt

        Leia todo o conteúdo

        Mostre o texto na tela linha por linha

        Encerre o arquivo

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ifstream arquivo("02.txt");

    if(!arquivo.is_open()){
        return EXIT_FAILURE;
    }

    cout << "Lendo arquivo 02.txt: " << endl << endl;

    string linha;

    while(getline(arquivo,linha)){
        cout << linha << endl;
    }

    cout << endl << "Arquivo lido, fechando...";

    arquivo.close();

    return EXIT_SUCCESS;
    
}