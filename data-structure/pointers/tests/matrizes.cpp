#include <iostream>
using namespace std;

int main(){

    //Agora então tenho matriz[[],[],[],[],[]]
    //ok então o [0] chama a linha 1 [[],...]
    //aí o [0][0] vai chamar então o elemento dentro dele [ [x], ...]

    //aqui matriz[0][0] chama [[], ...]

    int** matriz = new int*[3];
    for(int i = 0; i < 3; i++)
    {
        matriz[i] = new int[3];
    }

    cout << "Matriz: " << endl;
    int counter = 1;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matriz[i][j] = counter;
            counter++;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return EXIT_SUCCESS;
}