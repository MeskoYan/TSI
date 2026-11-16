//
// ex03.cpp - Exercício 03: Inserir um vetor de números de uma vez na lista
// Baseado nos algoritmos de Lista Linear em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/ListaSequencial.h"

using namespace std;

// Classe derivada que adiciona os métodos para inserção em lote
class ListaComVetor : public ListaSequencial {
public:
    ListaComVetor() = default;

    // Insere um vetor de tamanho n ao final da lista
    bool insereVetor(const TIPO vet[], unsigned short n) {
        return insereVetor(vet, n, tam);
    }

    // Insere um vetor de tamanho n em uma posição pos específica da lista
    bool insereVetor(const TIPO vet[], unsigned short n, unsigned short pos) {
        // Valida se a posição é válida e se há espaço suficiente para todos os elementos
        if (pos <= tam && (tam + n) <= TMAX) {
            // Desloca os elementos existentes à direita para abrir espaço de tamanho n
            for (int i = tam - 1; i >= static_cast<int>(pos); i--) {
                v[i + n] = v[i];
            }

            // Copia os n elementos do vetor para a lista a partir de pos
            for (unsigned short i = 0; i < n; i++) {
                v[pos + i] = vet[i];
            }

            tam += n; // Atualiza o tamanho total da lista
            return true;
        }
        return false;
    }
};

int main() {
    cout << "=== EXERCICIO 03: Inserir Vetor de Numeros de Uma Vez ===\n\n";

    ListaComVetor lista;

    // 1. Inserir alguns elementos iniciais
    lista.insereF(10);
    lista.insereF(20);
    lista.insereF(30);

    cout << "Lista inicial (comprimento " << lista.comprimento() << "):\n" << lista << "\n";

    // 2. Inserir vetor ao final
    TIPO loteFim[] = {40, 50, 60, 70};
    unsigned short tamLoteFim = sizeof(loteFim) / sizeof(loteFim[0]);

    cout << "Inserindo vetor de 4 elementos no final: {40, 50, 60, 70}...\n";
    if (lista.insereVetor(loteFim, tamLoteFim)) {
        cout << "Vetor inserido com sucesso!\n";
    } else {
        cout << "Falha ao inserir vetor (sem espaço ou posição inválida).\n";
    }
    cout << "Lista apos insercao ao final (comprimento " << lista.comprimento() << "):\n" << lista << "\n";

    // 3. Inserir vetor no meio (posição 2)
    TIPO loteMeio[] = {991, 992};
    unsigned short tamLoteMeio = sizeof(loteMeio) / sizeof(loteMeio[0]);

    cout << "Inserindo vetor de 2 elementos na posicao 2: {991, 992}...\n";
    if (lista.insereVetor(loteMeio, tamLoteMeio, 2)) {
        cout << "Vetor inserido com sucesso na posicao 2!\n";
    }
    cout << "Lista apos insercao no meio (comprimento " << lista.comprimento() << "):\n" << lista << "\n";

    // 4. Teste de inserção com estouro de capacidade
    cout << "Teste de seguranca: tentando inserir mais de TMAX elementos...\n";
    TIPO loteGrande[TMAX];
    for (int i = 0; i < TMAX; i++) loteGrande[i] = i;
    if (!lista.insereVetor(loteGrande, TMAX)) {
        cout << "Correto: insercao recusada pois excede a capacidade maxima TMAX (" << TMAX << ").\n";
    }

    return 0;
}

