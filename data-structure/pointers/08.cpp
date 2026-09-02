#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

//algoritmo pra inverter string
/*
    para 4 caracteres
    casa
    então 0 vira 3
    então 1 vira 2
    então 2 vira 1
    então 3 vira 0
*/

//esse daqui foi mta loucura

void invertedor(char* entrada, char* saida){
    int j = 0;
    for(int i = strlen(entrada)-1; i >= 0 ; i--){
        saida[j] = entrada[i];
        j++;
    }
    saida[j] = '\0';

    return;
}

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "8) Crie uma função que recebe 2 strings entrada e saída ambas ponteiros para char e inverte o texto de entrada em saída." << endl << endl;
 
    char* entrada = "cuiudo";
    char* saida = new char[strlen(entrada) + 1];
    invertedor(entrada,saida);

    cout << "Teste: " << entrada << " " << saida<< endl;

    delete saida;

    return EXIT_SUCCESS;
}