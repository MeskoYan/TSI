//
// Created by andre on 13/04/2026.
//

#include "Pilha.h"

bool Pilha::empilha(TIPO val){
    if (tam<TMAX){	//verifica se a pilha ñ esta cheia
        v[tam++] = val;		//Adiciona val ao topo da pilha e incrementa o tamanho desta
        return true;       	//Avisa que foi inserido com sucesso
    }
    return false;			//Pilha cheia
}

TIPO Pilha::desempilha(){
    return ((tam>0)?v[--tam]:0);
}