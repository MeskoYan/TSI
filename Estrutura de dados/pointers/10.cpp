#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "10) Alocar dinamicamente um vetor e preenchê-lo." << endl;

    int* v = new int[5]{10,20,30,40,50};

    for(int i=0; i<5 ; i++){
        cout << v[i] << endl;
    }

    return EXIT_SUCCESS;
}