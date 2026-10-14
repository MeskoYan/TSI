//
// Created by andre on 13/04/2026.
//

#ifndef LISTAESTATICA_FILA_H
#define LISTAESTATICA_FILA_H
#include "blista.h"

class Fila : public Blista {
public:
    bool inserir(TIPO val);
    TIPO obter();

    TIPO ver(){
        return v[0];
    }
};


#endif //LISTAESTATICA_FILA_H