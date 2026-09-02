#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int tamanhostr(string texto){
    int* ptr = new int;
    for(*ptr = 0; texto[*ptr] != '\0'; (*ptr)++);
    int tamanho = *ptr;
    delete ptr;
    return tamanho;
}

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);
    
    cout << "7) Crie uma função que usando ponteiros e não utilizando nenhuma outra função retorne o tamanho de uma string" << endl << endl;

    string teste = "teste";

    int* ponteiro = new int;
    *ponteiro = tamanhostr(teste);

    cout << "Tamanho da string: " << *ponteiro << endl;

    delete ponteiro;

    return EXIT_SUCCESS;
}