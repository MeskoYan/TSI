#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

float* dobrador(float* val){
    *val *= 2;
    return val;
}

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "6) Crie uma função dobra que recebe um valor ponteiro de float e dobra seu valor retornando o valor em dobro na mesma variável" << endl << endl;
    
    float* val = new float;
    *val = 2;
     
    cout << "Valor original: " << *val << endl;

    dobrador(val);

    cout << "Valor dobrado: " << *val << endl << endl;
    
    delete val;

    return EXIT_SUCCESS;
}