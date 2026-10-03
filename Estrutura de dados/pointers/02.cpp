#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    system("cls");

    cout << endl << "2) Modifique o valor de uma variável usando seu ponteiro." << endl; 

    int x = 10, *ptr = &x; 

    cout << "Valor original: " << x << endl;

    *ptr = 20;
    
    cout << "Valor modificado: " << x << endl;

    return EXIT_SUCCESS;
}