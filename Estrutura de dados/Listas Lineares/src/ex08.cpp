//
// ex08.cpp - Exercício 08: Inverter a Pilha
// Baseado nos algoritmos de Pilha em ../Algoritmos/
//

#include <iostream>
#include <algorithm>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/Pilha.h"
#include "../Algoritmos/Fila.h"

using namespace std;

// Classe que estende Pilha para adicionar o método de inversão
class PilhaEx : public Pilha {
public:
    PilhaEx() = default;

    // Método 1: Inversão Direta In-Place
    // Utiliza o acesso protegido ao vetor interno v herdado de Blista.
    void inverterInPlace() {
        for (unsigned short i = 0; i < tam / 2; i++) {
            std::swap(v[i], v[tam - 1 - i]);
        }
    }

    // Método 2: Inversão Clássica de Estrutura de Dados (via TAD com Fila Auxiliar)
    // Demonstra a interação entre as disciplinas LIFO (Pilha) e FIFO (Fila):
    // 1. Ao desempilhar tudo e enfileirar na Fila, a ordem é extraída do topo para a base.
    // 2. Ao desenfileirar da Fila e reempilhar, os elementos retornam na ordem inversa original.
    void inverterComFila() {
        Fila filaAux;

        // Desempilha todos os itens para a fila
        while (tam > 0) {
            filaAux.inserir(desempilha());
        }

        // Desenfileira da fila e devolve para a pilha
        while (filaAux.comprimento() > 0) {
            empilha(filaAux.obter());
        }
    }

    // Método principal inverter (chama a versão in-place por padrão)
    void inverter() {
        inverterInPlace();
    }
};

int main() {
    cout << "=== EXERCICIO 08: Metodo para Inverter a Pilha ===\n\n";

    // 1. Teste da Inversão In-Place
    cout << "--- Teste 1: Inversao In-Place ---\n";
    PilhaEx p1;
    p1.empilha(10);
    p1.empilha(20);
    p1.empilha(30);
    p1.empilha(40);
    p1.empilha(50);

    cout << "Pilha original (Base -> Topo):\n" << p1 << "\n";

    cout << "Invertendo pilha p1 in-place...\n";
    p1.inverterInPlace();
    cout << "Pilha p1 apos inversao (Base -> Topo):\n" << p1 << "\n";

    cout << "Desempilhando p1 para confirmar nova ordem:\n";
    while (p1.comprimento() > 0) {
        cout << "Desempilhou: " << p1.desempilha() << "\n";
    }
    cout << "\n";

    // 2. Teste da Inversão usando Fila Auxiliar
    cout << "--- Teste 2: Inversao Conceitual com Fila Auxiliar ---\n";
    PilhaEx p2;
    p2.empilha(1);
    p2.empilha(2);
    p2.empilha(3);
    p2.empilha(4);

    cout << "Pilha p2 original (Base -> Topo):\n" << p2 << "\n";

    cout << "Invertendo pilha p2 com Fila auxiliar...\n";
    p2.inverterComFila();
    cout << "Pilha p2 apos inversao com Fila (Base -> Topo):\n" << p2 << "\n";

    cout << "Desempilhando p2:\n";
    while (p2.comprimento() > 0) {
        cout << "Desempilhou: " << p2.desempilha() << "\n";
    }

    return 0;
}

