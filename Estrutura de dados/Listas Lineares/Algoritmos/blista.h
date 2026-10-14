//
// Created by andre on 13/04/2026.
//

#ifndef LISTAESTATICA_BLISTA_H
#define LISTAESTATICA_BLISTA_H
#include <iostream>
#define TIPO int // Definição do tipo
#define TMAX 100 // Tamanho máximo da lista

class Blista {
protected:
    unsigned short tam; // Tamanho ocupado da lista
    TIPO v[TMAX]; // Vetor com os dados a serem armazenados
public:
    Blista() : tam(0) {}
    int comprimento();
    friend std::ostream& operator<<(std::ostream& os, const Blista& lista);
    void ordena();
};


#endif //LISTAESTATICA_BLISTA_H