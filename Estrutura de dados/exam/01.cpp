
/*
Uma escola precisa de um pequeno sistema para salvar os dados dos alunos em um arquivo. O grande desafio é que cada aluno pode ter um número diferente de avaliações durante o semestre. Você foi encarregado de criar a estrutura base para salvar e recuperar esses dados sem perder informações ou causar erros de memória.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    int qtd_avaliacoes;
    float* avaliacoes_nota;

    
    Aluno(string n = "Fulano", int qtd = 1)
    {
        nome = n;
        qtd_avaliacoes = qtd;
        avaliacoes_nota = new float[qtd_avaliacoes];
    }
    
    ~Aluno()
    {
        delete[] avaliacoes_nota;
    }

    float media()
    {
        float soma = 0.0;
        for(int i = 0; i < qtd_avaliacoes; i++)
        {
            soma += avaliacoes_nota[i];
        }
        return soma/qtd_avaliacoes;
    }

};

void salvar(Aluno& aluno){
    ofstream arquivo("teste.txt");

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    arquivo << "Nome: " << aluno.nome << endl << "Quantidade de avaliações: " << aluno.qtd_avaliacoes << endl << "Notas: ";
    for(int i = 0; i < aluno.qtd_avaliacoes ; i++){
        arquivo << aluno.avaliacoes_nota[i] << "; ";
    } 

    arquivo << endl << "Media do " << aluno.nome << ": " << aluno.media()<< endl;

    arquivo.close();

    cout << "Dados salvos em teste.txt";
}

int main(){

    cout << "Digite o nome do aluno: ";
    string n;
    cin >> n;

    Aluno teste(n, 3);

    cout << "A seguir serão digitadas as notas para o aluno: " << teste.nome << endl;
    for(int i = 0; i < teste.qtd_avaliacoes; i++)
    {
        cout << "Digite a nota " << i+1 << ": ";
        cin >> teste.avaliacoes_nota[i];
    }

    cout << endl << "Aluno: " << teste.nome << endl;
    for(int i = 0; i < teste.qtd_avaliacoes; i++)
    {
        cout << "Nota " << i+1 << ": " << teste.avaliacoes_nota[i] << endl;
    }
    cout << "A media do aluno: " << teste.nome << " é " << teste.media() << endl;

    salvar(teste);

    return EXIT_SUCCESS;
}