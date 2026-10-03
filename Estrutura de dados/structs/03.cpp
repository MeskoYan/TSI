/*
3. Ponto no plano cartesiano

Crie uma struct Ponto com:

    x
    y

Tarefas:

    Leia dois pontos
    Calcule a distância entre eles

*/

#include <iostream>

using namespace std;

struct Ponto {
    float x;
    float y;
    Ponto operator-(const Ponto &outro_ponto){
        return Ponto{x - outro_ponto.x, y - outro_ponto.y};
    }
};

int main(){

    Ponto p1, p2;

    cout << "Digite x para o ponto 1: ";
    cin >> p1.x;
    cout << "Digite y para o ponto 1: ";
    cin >> p1.y;
    
    cout << "Digite x para o ponto 2: ";
    cin >> p2.x;
    cout << "Digite y para o ponto 2: ";
    cin >> p2.y;

    Ponto distancia = p1 - p2;
    cout << distancia.x << "  " << distancia.y << endl;

    return EXIT_SUCCESS;
}