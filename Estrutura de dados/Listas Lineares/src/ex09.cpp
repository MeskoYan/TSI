//
// ex09.cpp - Exercício 09: Fila Circular (Slide 52 do PDF lista_Lineares.pdf)
// Baseado nos algoritmos de Fila e Blista em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"

using namespace std;

// Classe FilaCircular herdada de Blista conforme solicitado no Slide 52 do PDF:
// "Leia os métodos de fila, e crie uma classe fila circular também herdada de ListaBasica [Blista] com os mesmos métodos."
//
// Diferença em relação à Fila convencional (Slide 46 e 47):
// - Na Fila convencional, o método 'obter()' desloca todos os elementos uma posição à esquerda O(n).
// - Na FilaCircular, usamos ponteiros de 'inicio' e 'fim' com aritmética modular (% TMAX).
//   Tanto 'inserir()' quanto 'obter()' são executados em tempo constante O(1).
class FilaCircular : public Blista {
protected:
    unsigned short inicio; // Índice do primeiro elemento a ser atendido
    unsigned short fim;    // Índice da próxima posição livre para inserção

public:
    FilaCircular() : Blista(), inicio(0), fim(0) {}

    // Insere um elemento no final da fila circular
    bool inserir(TIPO val) {
        if (tam < TMAX) { // Fila não está cheia
            v[fim] = val;
            fim = (fim + 1) % TMAX; // Avanço circular
            tam++;
            return true;
        }
        return false; // Fila cheia
    }

    // Retira e retorna o elemento no início da fila circular (FIFO)
    TIPO obter() {
        if (tam > 0) { // Fila não está vazia
            TIPO val = v[inicio];
            inicio = (inicio + 1) % TMAX; // Avanço circular sem movimentar memória
            tam--;
            return val;
        }
        return -1; // Fila vazia
    }

    // Inspeciona o elemento da frente da fila sem removê-lo
    TIPO ver() const {
        if (tam > 0) {
            return v[inicio];
        }
        return -1;
    }

    bool vazia() const {
        return tam == 0;
    }

    bool cheia() const {
        return tam == TMAX;
    }

    // Sobrecarga de exibição formatada para percorrer a ordem lógica da fila circular
    friend std::ostream& operator<<(std::ostream& os, const FilaCircular& f) {
        for (unsigned short i = 0; i < f.tam; i++) {
            unsigned short idx = (f.inicio + i) % TMAX;
            os << f.v[idx] << endl;
        }
        return os;
    }

    // Método utilitário para depuração que mostra o estado dos ponteiros internos
    void statusInterno() const {
        cout << "[Estado Interno] inicio=" << inicio
             << ", fim=" << fim
             << ", tam=" << tam
             << ", TMAX=" << TMAX << "\n";
    }
};

int main() {
    cout << "=== EXERCICIO 09: Fila Circular O(1) (Slide 52 do PDF) ===\n\n";

    FilaCircular fila;

    // 1. Inserir elementos na fila
    cout << "Inserindo elementos 10, 20, 30, 40...\n";
    fila.inserir(10);
    fila.inserir(20);
    fila.inserir(30);
    fila.inserir(40);
    fila.statusInterno();
    cout << "Conteudo da fila:\n" << fila << "\n";

    // 2. Inspecionar o primeiro
    cout << "Elemento na frente da fila (ver()): " << fila.ver() << "\n\n";

    // 3. Remover 2 elementos da fila
    cout << "Removendo 2 elementos com obter()...\n";
    cout << "Obtido: " << fila.obter() << "\n";
    cout << "Obtido: " << fila.obter() << "\n";
    fila.statusInterno();
    cout << "Conteudo da fila apos remocoes:\n" << fila << "\n";

    // 4. Inserir mais elementos para demonstrar o avanço circular
    cout << "Inserindo elementos 50, 60, 70...\n";
    fila.inserir(50);
    fila.inserir(60);
    fila.inserir(70);
    fila.statusInterno();
    cout << "Conteudo da fila:\n" << fila << "\n";

    // 5. Esvaziando a fila completamente
    cout << "Esvaziando a fila completamente:\n";
    while (!fila.vazia()) {
        cout << "Desenfileirado: " << fila.obter() << "\n";
    }
    fila.statusInterno();

    cout << "\nTeste obter() em fila vazia: " << fila.obter() << " (retorno seguro -1)\n";

    return 0;
}

