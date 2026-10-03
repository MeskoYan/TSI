#include <iostream>
#include <stdlib.h>
using namespace std;

int* somador(int *a, int *b){
    int* ptr = new int(*a+*b);
    return ptr;
}

int main(){

    system("cls");

    cout << "5) Crie uma função que some dois números usando uma função que recebe ponteiros e retorne o resultado como um ponteiro" << endl << endl;

    //declarações
    int* ptr1 = new int;
    int* ptr2= new int;
    int* resultado = new int;

    //atribuções
    *ptr1 = 5;
    *ptr2 = 15;
    *resultado = *somador(ptr1,ptr2);

    cout << "Teste 01: " << *resultado << endl << endl;

    //deletações
    delete ptr1, ptr2, resultado;

    return EXIT_SUCCESS;
}