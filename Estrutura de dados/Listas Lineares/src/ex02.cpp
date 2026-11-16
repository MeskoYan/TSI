//
// ex02.cpp - Exercício 02: Sobrecarga do operador + para concatenar duas listas
// Baseado nos algoritmos de Lista Linear em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/ListaSequencial.h"

using namespace std;

// Classe que estende ListaSequencial para adicionar o operador +
class ListaSequencialEx : public ListaSequencial {
public:
    ListaSequencialEx() = default;

    // Sobrecarga do operador + como método membro
    // Permite l1 + l2
    ListaSequencialEx operator+(const ListaSequencialEx& outra) const {
        ListaSequencialEx res = *this; // Copia a lista atual

        // Adiciona os elementos da outra lista
        for (int i = 0; i < const_cast<ListaSequencialEx&>(outra).comprimento(); i++) {
            if (!res.insereF(outra[i])) {
                cout << "[Aviso] Limite TMAX atingido durante a soma (+) das listas.\n";
                break;
            }
        }
        return res;
    }
};

int main() {
    cout << "=== EXERCICIO 02: Sobrecarga do Operador + para Concatenacao ===\n\n";

    ListaSequencialEx l1;
    l1.insereF(1);
    l1.insereF(2);
    l1.insereF(3);

    ListaSequencialEx l2;
    l2.insereF(4);
    l2.insereF(5);

    ListaSequencialEx l3;
    l3.insereF(6);
    l3.insereF(7);

    cout << "Lista 1:\n" << l1 << "\n";
    cout << "Lista 2:\n" << l2 << "\n";
    cout << "Lista 3:\n" << l3 << "\n";

    // Operação de concatenação via operador +
    ListaSequencialEx soma = l1 + l2;
    cout << "Resultado de (l1 + l2) (comprimento " << soma.comprimento() << "):\n";
    cout << soma << "\n";

    // Encadeamento de operadores: l1 + l2 + l3
    ListaSequencialEx encadeada = l1 + l2 + l3;
    cout << "Resultado de (l1 + l2 + l3) (comprimento " << encadeada.comprimento() << "):\n";
    cout << encadeada << "\n";

    return 0;
}

