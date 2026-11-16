//
// ex06.cpp - Exercício 06: Dizer qual o menor valor da lista
// Baseado nos algoritmos de Lista Linear em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/ListaSequencial.h"

using namespace std;

// Classe que estende ListaSequencial para adicionar o método de busca do menor valor
class ListaComMenor : public ListaSequencial {
public:
    ListaComMenor() = default;

    // Retorna o menor valor por referência e sinaliza sucesso via bool.
    // Seguro para listas vazias.
    bool menor(TIPO& resultado) const {
        if (tam == 0) {
            return false; // Lista vazia
        }

        TIPO m = v[0];
        for (unsigned short i = 1; i < tam; i++) {
            if (v[i] < m) {
                m = v[i];
            }
        }
        resultado = m;
        return true;
    }

    // Sobrecarga de conveniência que retorna diretamente o valor.
    // Retorna -1 se vazia e avisa no terminal.
    TIPO menor() const {
        TIPO res = -1;
        if (!menor(res)) {
            cerr << "[Aviso] Tentativa de buscar menor valor em lista vazia.\n";
        }
        return res;
    }
};

int main() {
    cout << "=== EXERCICIO 06: Metodo para Encontrar o Menor Valor ===\n\n";

    ListaComMenor lista;

    // 1. Teste com lista vazia
    TIPO minVal;
    if (!lista.menor(minVal)) {
        cout << "Teste lista vazia: retornou falso corretamente.\n\n";
    }

    // 2. Inserindo diversos valores não ordenados
    lista.insereF(45);
    lista.insereF(12);
    lista.insereF(89);
    lista.insereF(-15);
    lista.insereF(102);
    lista.insereF(33);
    lista.insereF(7);

    cout << "Elementos da lista:\n" << lista << "\n";

    // 3. Obtendo o menor valor
    if (lista.menor(minVal)) {
        cout << "Menor valor encontrado (via referencia): " << minVal << "\n";
    }
    cout << "Menor valor encontrado (via retorno direto): " << lista.menor() << "\n\n";

    // 4. Teste adicionando um novo menor valor ainda mais negativo
    cout << "Inserindo o valor -99 no final da lista...\n";
    lista.insereF(-99);
    cout << "Novo menor valor: " << lista.menor() << "\n";

    return 0;
}

