//
// Created by andre on 13/04/2026.
//

#include "blista.h"


int Blista::comprimento() {
    return tam;
}

std::ostream& operator<<(std::ostream& os, const Blista& lista) {
    for (unsigned short i = 0; i < lista.tam; i++)
        os << lista.v[i] << std::endl;
    return os;
}

void Blista::ordena() {
    for (unsigned short i = 0; i < tam-1; i++)
        for (unsigned short j = i+1; j < tam; j++)
            if (v[i] > v[j + 1])
                std::swap(v[i], v[j + 1]);
}