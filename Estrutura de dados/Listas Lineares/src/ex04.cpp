//
// ex04.cpp - Exercício 04: Remover quaisquer valores de um intervalo definido de posições [posIni, posFim]
// Baseado nos algoritmos de Lista Linear em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/ListaSequencial.h"

using namespace std;

// Classe que estende ListaSequencial para implementar remoção por intervalo de posições
class ListaComRemocaoIntervalo : public ListaSequencial {
public:
    ListaComRemocaoIntervalo() = default;

    // Remove todos os elementos compreendidos entre os índices posIni e posFim (inclusive).
    // Exemplo: em uma lista com [10, 20, 30, 40, 50, 60], remover do índice 2 ao 4 remove (30, 40, 50),
    // resultando em [10, 20, 60].
    bool delIntervalo(unsigned short posIni, unsigned short posFim) {
        // Validação dos limites: posIni deve ser menor ou igual a posFim,
        // e posFim deve ser estritamente menor que tam.
        if (posIni <= posFim && posFim < tam) {
            unsigned short qtd = posFim - posIni + 1; // Quantidade de elementos a remover

            // Desloca os elementos que vêm após posFim para a esquerda,
            // cobrindo o bloco removido
            for (unsigned short i = posIni; i < tam - qtd; i++) {
                v[i] = v[i + qtd];
            }

            tam -= qtd; // Reduz a quantidade de elementos ocupados
            return true;
        }
        return false; // Intervalo inválido
    }
};

int main() {
    cout << "=== EXERCICIO 04: Remocao de Valores em Intervalo de Posicoes ===\n\n";

    ListaComRemocaoIntervalo lista;

    // Popula a lista com valores [10, 20, 30, 40, 50, 60, 70, 80]
    for (int i = 1; i <= 8; i++) {
        lista.insereF(i * 10);
    }

    cout << "Lista original (comprimento " << lista.comprimento() << "):\n";
    cout << "Indice: [ 0   1   2   3   4   5   6   7 ]\n";
    cout << "Valores:\n" << lista << "\n";

    // 1. Remover do índice 2 ao 4 (elementos 30, 40, 50)
    cout << "Removendo intervalo de posicoes [2, 4] (elementos 30, 40, 50)...\n";
    if (lista.delIntervalo(2, 4)) {
        cout << "Intervalo removido com sucesso!\n";
    } else {
        cout << "Erro: intervalo invalido.\n";
    }
    cout << "Lista apos remocao [2, 4] (comprimento " << lista.comprimento() << "):\n";
    cout << lista << "\n";

    // 2. Remover do início: posições [0, 1] (elementos 10, 20)
    cout << "Removendo intervalo no inicio [0, 1] (elementos 10, 20)...\n";
    if (lista.delIntervalo(0, 1)) {
        cout << "Intervalo inicial removido com sucesso!\n";
    }
    cout << "Lista apos remocao [0, 1] (comprimento " << lista.comprimento() << "):\n";
    cout << lista << "\n";

    // 3. Teste com intervalo inválido
    cout << "Tentando remover intervalo invalido [3, 10]...\n";
    if (!lista.delIntervalo(3, 10)) {
        cout << "Correto: remocao recusada por limites fora do vetor.\n";
    }

    return 0;
}

