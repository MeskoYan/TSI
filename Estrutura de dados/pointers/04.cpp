#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    system("cls");

    cout << "4) Crie um array e percorra-o usando ponteiros." << endl;

    int arr[5] = {1,2,3,4,5};

    cout << "Array: ";
    //maneira 01 de iterar:
    for(int elmt:arr){
        cout << elmt << " ";
    }
    cout << endl << endl;

    //iterando com ponteiro:
    cout << "For loop com ponteiro: " << endl;
    for(int i = 0 ,*ptr = &i; *ptr < 5 ; (*ptr)++){
        cout << "Valor: " << arr[*ptr] << endl << "Index: " << *ptr << endl << endl;
    }

    return EXIT_SUCCESS;
    
}