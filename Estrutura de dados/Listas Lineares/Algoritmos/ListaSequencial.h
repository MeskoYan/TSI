//
// Created by andre on 13/04/2026.
//

#ifndef LISTAESTATICA_LISTASEQUENCIAL_H
#define LISTAESTATICA_LISTASEQUENCIAL_H
#include "blista.h"


class ListaSequencial: public Blista {
public:
    ListaSequencial() = default;

    TIPO primeiro();
    TIPO ultimo();
    bool localiza(TIPO val);
    int pos(TIPO val);
    TIPO ler(unsigned short pos);
    bool insere(TIPO val,unsigned short pos);
    bool insereI(TIPO val);
    bool insereF(TIPO val);
    bool delP(unsigned short pos);
    bool delV(TIPO val);
    TIPO operator[](unsigned short pos) const {
        return (pos<tam?v[pos]:0);
    };
    // Crie uma função que concatena duas listas estáticas
    // Sobrecarregue o método + para concatenar duas listas sequenciais
    // Crie um método para inserir um vetor de números de uma vez na lista
    // Crie um método para remover quaisquer valores de um intervalo definido
    // Crie um método para dizer qual o maior valor da lista
    // Crie um método para dizer qual o menor valor da lista
    // Crie um método para retornar todos os valores que atendam sejam maior que um parametro passado

};


#endif //LISTAESTATICA_LISTASEQUENCIAL_H