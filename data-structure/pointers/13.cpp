#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

void escalante(int matriz[2][2], int escalar){
    for( int i = 0 ; i < 2 ; i ++ ){
        for ( int j = 0 ; j < 2 ; j++ ){
            matriz[i][j] = matriz[i][j] * escalar;
        }
    }
}

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "13) Crie uma função que recebe uma matriz 2x2 e um escalar e multiplica a matriz pelo escalar retornado os dados na própria matriz." << endl;

    int m[2][2] = {{1,2} , {3,4}};

    cout << "Matriz original: " << endl;
    for( int i = 0 ; i < 2 ; i ++ ){
        for ( int j = 0 ; j < 2 ; j++ ){
            cout << " " << m[i][j] << " ";
        }
        cout << endl;
    }

    escalante(m, 2);

    cout << "Matriz escalada: " << endl;
    for( int i = 0 ; i < 2 ; i ++ ){
        for ( int j = 0 ; j < 2 ; j++ ){
            cout << " " << m[i][j] << " ";
        }
        cout << endl;
    }

    return EXIT_SUCCESS;
}