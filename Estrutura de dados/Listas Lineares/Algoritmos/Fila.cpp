//
// Created by andre on 13/04/2026.
//

#include "Fila.h"

bool Fila::inserir(TIPO val){

    if (tam<TMAX){		//Verifica se a fila ñ esta cheia
        v[tam++] = val;
        return true;
    }
    return false;
}

TIPO Fila::obter(){
    int val = v[0]; // guarda o valor antes de deletar
    if (tam>0){
        for (int i=0; i<(tam-1);i++)
            v[i]=v[i+1];
        tam--;
    }
    return val;
}

TIPO Fila::ver(){
    return v[0];
}