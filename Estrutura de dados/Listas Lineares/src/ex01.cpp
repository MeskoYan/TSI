//
// ex01.cpp - Exercício 01: Concatenação de duas listas estáticas (Função)
// Baseado nos algoritmos de Lista Linear em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/ListaSequencial.h"

using namespace std;

// Função que concatena duas listas sequenciais/estáticas
// Retorna uma nova ListaSequencial contendo todos os elementos de l1 seguidos de l2.
ListaSequencial concatena(const ListaSequencial& l1, const ListaSequencial& l2) {
    ListaSequencial resultado;

    // Copia todos os elementos de l1
    for (int i = 0; i < const_cast<ListaSequencial&>(l1).comprimento(); i++) {
        resultado.insereF(l1[i]);
    }

    // Copia todos os elementos de l2 (se couberem na capacidade máxima TMAX)
    for (int i = 0; i < const_cast<ListaSequencial&>(l2).comprimento(); i++) {
        if (!resultado.insereF(l2[i])) {
            cout << "[Aviso] Lista atingiu a capacidade máxima (TMAX). Elementos restantes descartados.\n";
            break;
        }
    }

    return resultado;
}

int main() {
    cout << "=== EXERCICIO 01: Funcao de Concatenacao de Listas Estatisticas ===\n\n";

    ListaSequencial l1;
    l1.insereF(10);
    l1.insereF(20);
    l1.insereF(30);

    ListaSequencial l2;
    l2.insereF(40);
    l2.insereF(50);
    l2.insereF(60);

    cout << "Lista 1 (comprimento " << l1.comprimento() << "):\n" << l1 << "\n";
    cout << "Lista 2 (comprimento " << l2.comprimento() << "):\n" << l2 << "\n";

    ListaSequencial l3 = concatena(l1, l2);
    cout << "Lista Concatenada l3 = concatena(l1, l2) (comprimento " << l3.comprimento() << "):\n";
    cout << l3 << "\n";

    cout << "Teste com lista vazia:\n";
    ListaSequencial vazia;
    ListaSequencial l4 = concatena(l1, vazia);
    cout << "l4 = concatena(l1, vazia) (comprimento " << l4.comprimento() << "):\n";
    cout << l4;

    return 0;
}

