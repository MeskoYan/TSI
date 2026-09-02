#include <iostream>

using namespace std;

struct ponto2D {
    float x;
    float y;
    ponto2D operator+(ponto2D p){
        ponto2D holder;
        holder.x = x + p.x;
        holder.y = y + p.y;
        return holder;
    }
};

int main(){

    ponto2D p1={1,2},p2={3,4},p3;
    p3 = p1+p2;
    cout << p3.x << endl << p3.y;


    return 0;
}