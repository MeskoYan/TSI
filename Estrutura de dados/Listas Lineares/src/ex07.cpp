//
// ex07.cpp - Exercício 07: Retornar todos os valores maiores que um parâmetro passado
// Baseado nos algoritmos de Lista Linear em ../Algoritmos/
//

#include <iostream>
#include "../Algoritmos/blista.h"
#include "../Algoritmos/ListaSequencial.h"

using namespace std;

// Classe que estende ListaSequencial para adicionar método de filtragem de valores
class ListaComFiltro : public ListaSequencial {
public:
    ListaComFiltro() = default;

    // Retorna uma nova ListaSequencial contendo todos os elementos que sejam estritamente
    // maiores que o parâmetro 'param'.
    ListaSequencial filtrarMaiores(TIPO param) const {
        ListaSequencial resultado;

        for (unsigned short i = 0; i < tam; i++) {
            if (v[i] > param) {
                resultado.insereF(v[i]);
            }
        }

        return resultado;
    }
};

int main() {
    cout << "=== EXERCICIO 07: Retornar Elementos Maiores Que um Parametro ===\n\n";

    ListaComFiltro lista;

    // Inserindo dados de teste
    lista.insereF(15);
    lista.insereF(3);
    lista.insereF(42);
    lista.insereF(8);
    lista.insereF(25);
    lista.insereF(100);
    lista.insereF(18);

    cout << "Lista original (comprimento " << lista.comprimento() << "):\n" << lista << "\n";

    // 1. Filtrar maiores que 20
    TIPO corte1 = 20;
    cout << "Filtrando elementos maiores que " << corte1 << "...\n";
    ListaSequencial maioresQue20 = lista.filtrarMaiores(corte1);
    cout << "Resultado (comprimento " << maioresQue20.comprimento() << "):\n" << maioresQue20 << "\n";

    // 2. Filtrar maiores que 50
    TIPO corte2 = 50;
    cout << "Filtrando elementos maiores que " << corte2 << "...\n";
    ListaSequencial maioresQue50 = lista.filtrarMaiores(corte2);
    cout << "Resultado (comprimento " << maioresQue50.comprimento() << "):\n" << maioresQue50 << "\n";

    // 3. Filtrar com valor onde nenhum elemento atende o critério
    TIPO corte3 = 200;
    cout << "Filtrando elementos maiores que " << corte3 << "...\n";
    ListaSequencial vazia = lista.filtrarMaiores(corte3);
    cout << "Resultado (comprimento " << vazia.comprimento() << "):\n";
    if (vazia.comprimento() == 0) {
        cout << "(Nenhum elemento encontrado)\n";
    }

    return 0;
}

