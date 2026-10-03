#include <iostream>

using namespace std;

struct complexo{
    float r, i;
};
complexo atribuir(float r, float i){
    complexo resultado;
    resultado.r = r;
    resultado.i = i;
    return resultado;
}

void imprime(complexo num){
    cout << num.r << " " << num.i << "i" << endl;
}

void copia(complexo origem, complexo *destino){
    (*destino).r = origem.r;
    (*destino).i = origem.i;
}

complexo soma(complexo a, complexo b){
    complexo resultado;
    resultado.r = a.r + b.r;
    resultado.i = a.i + b.i;
    return resultado;
}

bool realoufake(complexo a){
    return a.i == 0;
}

int main(){
    complexo num = atribuir(5,3), otronum = atribuir(5,7), holder = otronum;
    imprime(num);
    imprime(otronum);

    copia(num, &otronum);

    imprime(otronum);

    copia(holder,&otronum);

    holder = soma(num, otronum);
    imprime(holder);

    cout << realoufake(num) << endl;
    complexo a = atribuir(5,0);
    cout << realoufake(a);

    return 0;
}