//
// ex05.cpp - Exercício 05: Dizer qual o maior valor da lista
// Baseado nos algoritmos de Lista Linear em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/ListaSequencial.h"

using namespace std;

// Classe que estende ListaSequencial para adicionar o método de busca do maior valor
class ListaComMaior : public ListaSequencial {
public:
    ListaComMaior() = default;

    // Retorna o maior valor por referência e sinaliza sucesso via bool.
    // Seguro para listas vazias.
    bool maior(TIPO& resultado) const {
        if (tam == 0) {
            return false; // Lista vazia
        }

        TIPO m = v[0];
        for (unsigned short i = 1; i < tam; i++) {
            if (v[i] > m) {
                m = v[i];
            }
        }
        resultado = m;
        return true;
    }

    // Sobrecarga de conveniência que retorna diretamente o valor.
    // Retorna -1 se vazia e avisa no terminal.
    TIPO maior() const {
        TIPO res = -1;
        if (!maior(res)) {
            cerr << "[Aviso] Tentativa de buscar maior valor em lista vazia.\n";
        }
        return res;
    }
};

int main() {
    cout << "=== EXERCICIO 05: Metodo para Encontrar o Maior Valor ===\n\n";

    ListaComMaior lista;

    // 1. Teste com lista vazia
    TIPO maxVal;
    if (!lista.maior(maxVal)) {
        cout << "Teste lista vazia: retornou falso corretamente.\n\n";
    }

    // 2. Inserindo diversos valores não ordenados, incluindo positivos e negativos
    lista.insereF(45);
    lista.insereF(12);
    lista.insereF(89);
    lista.insereF(-5);
    lista.insereF(102);
    lista.insereF(33);
    lista.insereF(7);

    cout << "Elementos da lista:\n" << lista << "\n";

    // 3. Obtendo o maior valor
    if (lista.maior(maxVal)) {
        cout << "Maior valor encontrado (via referencia): " << maxVal << "\n";
    }
    cout << "Maior valor encontrado (via retorno direto): " << lista.maior() << "\n\n";

    // 4. Teste adicionando um novo maior valor
    cout << "Inserindo o valor 500 no inicio da lista...\n";
    lista.insereI(500);
    cout << "Novo maior valor: " << lista.maior() << "\n";

    return 0;
}

