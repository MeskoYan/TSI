#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    system("cls");

    cout << endl << "1) Declare um inteiro, crie um ponteiro para ele e imprima o valor e o endereço" << endl;

    int x, *ptr = &x;
    cout << "Valor: " << x << endl << "Endereço: " << ptr << endl;

    return EXIT_SUCCESS;
}