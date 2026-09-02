#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "12) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e escreva o maior endereço" << endl;
    //basta inverter as declarações pra alterar qual é maior, o último é o maior.
    int* ptr2 = new int;
    int* ptr1 = new int;

    if(ptr1 > ptr2){
        cout << "Ponteiro 1:" << ptr1 << endl;
    }
    else{
        cout << "Ponteiro 2:" << ptr2 << endl;
    }

    return EXIT_SUCCESS;
}