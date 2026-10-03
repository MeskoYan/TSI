#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    system("cls");

    cout << "3) Use um ponteiro para ler um valor digitado pelo usuário." << endl;

    int* ptr = new int;

    cout << "Leitura: ";
    cin >> *ptr;
    cout << "Valor lido: " << *ptr;

    delete ptr;

    return EXIT_SUCCESS;

}