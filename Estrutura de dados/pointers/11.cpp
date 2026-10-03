#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "11) Crie um ponteiro duplo e armazene o endereço de um ponteiro simples e depois escreva o valor da variável inicial utilizando o ponteiro duplo" << endl;

    int i = 0;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;

    cout << "Variavel inicial: " << i << endl;
    cout << "Ponteiro da variável: " << ptr1 << endl;
    cout << "Valor no ponteiro da variável: " << *ptr1 << endl;
    cout << "Ponteiro do ponteiro da variável: " << ptr2 << endl;
    cout << "Valor do apontado pelo duplo: " << *ptr2 << endl;
    cout << "Valor da variável: " << **ptr2 << endl;

    return EXIT_SUCCESS;
}