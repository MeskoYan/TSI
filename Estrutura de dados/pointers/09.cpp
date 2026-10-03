#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int maior(int* v, int size){
    int maior = v[0];

    for(int i = 0; i < size ; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }

    return maior;

}

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "9) Crie uma função que receba um vetor e retorne o maior elemento usando ponteiros" << endl;

    int v[5] = {10, 20, 30, 40, 50};
    int tam = sizeof(v)/sizeof(v[0]);

    cout << maior(v, tam) << endl;

    return EXIT_SUCCESS;
}