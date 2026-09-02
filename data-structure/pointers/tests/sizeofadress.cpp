#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    string* teste = new string;
    *teste = "casa";
    cout << sizeof(teste);
    cout << sizeof(*teste);
    cout << teste->size() << endl;

    for(int i = 0 ; i < teste->size(); i ++){
        for(int j = 0 ; j < teste -> size() ; j++){
            cout << teste[i][j] << endl;
        }
    }
    

    return EXIT_SUCCESS;
}