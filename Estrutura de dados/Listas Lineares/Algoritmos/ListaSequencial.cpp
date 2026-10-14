//
// Created by andre on 13/04/2026.
//

#include "ListaSequencial.h"

TIPO ListaSequencial::primeiro(){
    return v[0];
}

TIPO ListaSequencial::ultimo(){
    return v[tam-1]; //tam-1 por todo vetor come�ar em 0
}

bool ListaSequencial::localiza(TIPO val){
    for (unsigned short i=0; i<tam;i++)
        if (val == v[i])
            return true;
    return false;
}

int ListaSequencial::pos(TIPO val){
    for (unsigned short i=0; i<tam;i++)
        if (val == v[i])
            return i;
    return -1;//posi��o imposs�vel p/ sinalizar � encontrado
}


bool ListaSequencial::insere(TIPO val,unsigned short pos){
    if ((pos>=0)&&(pos<=tam)&&(tam<TMAX)){
        for (unsigned short i=tam; i>pos; i--)  // avan�a todos elementos
            v[i] = v[i-1];
        v[pos] = val;// grava o valor na posi��o
        tam++; // aumenta o tamanho do vetor
        return true;
    }
    return false;
}

bool ListaSequencial::insereI(TIPO val)
{
    return insere(val,0); //Chamada ao m�todo insere
}

bool ListaSequencial::insereF(TIPO val)
{
    return insere(val,tam);
}

bool ListaSequencial::delP(unsigned short pos){
    if ((pos>=0)&&(pos<tam))
    {
        for (unsigned short i=pos; i<(tam-1);i++)
            v[i]=v[i+1];
        tam--;// diminui o tamanho do vetor
        return true;
    }
    return false;
}
bool ListaSequencial::delV(TIPO val){
    return delP(pos(val));
}

TIPO ListaSequencial::ler(unsigned short pos){
    if ((pos>=0)&&(pos<tam))
        return v[pos];
    return -1;
}