/*
2. Produto e preço

Crie uma struct Produto com:

    nome
    preço
    quantidade

Tarefas:

    Calcule o valor total em estoque (preço * quantidade)
    Mostre o resultado

*/

#include <iostream>
#include <string.h>

using namespace std;

struct Produto {
    string nome;
    float preco;
    int qtd;
    float val_stk;
};


int main(){
    Produto p1;
    cout << "Nome: "; 
    cin >> p1.nome;
    cout << "Preco: ";
    cin >> p1.preco;
    cout << "Quantidade: "; 
    cin >> p1.qtd;

    p1.val_stk = p1.qtd * p1.preco;

    cout << endl << "Produto: " << p1.nome << endl << "Quantidade em estoque: " << p1.val_stk << endl;
    return 0;
}