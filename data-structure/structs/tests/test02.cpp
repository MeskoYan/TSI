#include <iostream>

using namespace std;

struct ponto2D{
    float x, y;
};

int main(){

    struct ponto2D ponto;
    ponto.x = 10;
    ponto.y = 10;

    cout << ponto.x << endl << ponto.y;

    return 0;
}