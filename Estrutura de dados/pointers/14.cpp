#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

//quais criterios definem uma estar dentro da outra?
//1 - os valores teste1 teste2, para teste2 estar em teste1, todos os valores devem estar presentes em teste1, não confere pois 2 não está presente em teste1
//2 - ordem, os valores devem estar na ordem teste1 para estarem dentro de teste1
bool ocorre(string primeira, string segunda){

    int contador = 0;
    for(int i = 0 ; i < primeira.size() ; i++ ){
        for( int j = 0 ; j < segunda.size() ; j++){
            if(i+j < primeira.size() && primeira[i+j] == segunda[j]){
                contador++;
            }            
        }
    }
    if(contador == segunda.size()){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    cout << "14) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira." << endl;

    string primeira = "teste1"; 
    string segunda = "teste1";

    cout << ocorre(primeira, segunda);

    return EXIT_SUCCESS;
}

