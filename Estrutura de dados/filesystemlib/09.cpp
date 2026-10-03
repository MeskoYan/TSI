/*
9. Banco de dados simples com busca

Crie um sistema que:

    Armazene produtos em produtos.txt, com formato:
    id;nome;preco

    O usuário pode:

        Inserir um novo produto

        Listar todos

        Buscar por nome

        Sair

Os dados devem ser lidos e escritos usando <fstream>.
*/

#include <iostream>
using namespace std;
#include <fstream>
#include <string>

struct Produto{
    int id;
    string nome;
    float preco;
    Produto(){}
    Produto(int n, string s, float p){
        id = n;
        nome = s;
        preco = p;
    }
    ~Produto(){}
};

void inserir_produto(ofstream& arquivo, const Produto& prod){
    arquivo << prod.id << ";" << prod.nome << ";" << prod.preco << endl;
    cout << "Produto registrado!" << endl << endl;
    arquivo.close();
    return;
}

void listar_produtos(ifstream& arquivo)
{
    cout << "Lista de produtos: " << endl;
    string linha;
    while(getline(arquivo,linha)){
        cout << linha << endl;
    }
    cout<<endl;
    arquivo.close();
    return;
}

void procurar_nome(ifstream& arquivo, string nome)
{
    string linha;
    int flag = 0;
    while(getline(arquivo,linha)){
        if(linha.find(nome) != string::npos)
        {
            if(flag == 0)
            {
                cout << "Produtos encontrados:" << endl;
                flag = 1;
            }
            cout << linha << endl;
        }
    }
    if(flag == 0)
    {
        cout << "Nenhum produto encontrado" << endl;
    }
    cout<<endl;
    arquivo.close();
    return;
}

void limpar_bd(ofstream& arquivo){
    arquivo << "";
    arquivo.close();
    return;
}

bool file_ok(const ifstream& arquivo){
    if(!arquivo.is_open())
    {
        cout << "ERRO!";
        return false;
    }
    else
    {
        return true;
    }
}
bool file_ok(const ofstream& arquivo){
    if(!arquivo.is_open())
    {
        cout << "ERRO!";
        return false;
    }
    else
    {
        return true;    
    }
}

int main(){

    int op;
    do{
        cout << "OPÇÕES:"<<endl<<"1-Inserir Produto"<<endl<<"2-Listar Produtos"<<endl<<"3-Buscar por nome"<<endl<<"4-Sair"<<endl<<endl;
        cin >> op;

        switch(op){
            case 1:
            {
                ofstream arquivo("09.txt", ios::app);
                file_ok(arquivo);

                Produto novo_produto;
                cout << "ID do novo produto: ";
                cin >> novo_produto.id;
                cout << "Nome do novo produto: ";
                getline(cin >> ws, novo_produto.nome); //Esse daqui é pra pegar nomes compostos
                cout << "Preço do novo produto: ";
                cin >> novo_produto.preco;

                inserir_produto(arquivo, novo_produto);

                break;
            }
            case 2:
                {
                    ifstream arquivo("09.txt",ios::app);
                    file_ok(arquivo);

                    listar_produtos(arquivo);
                    break;
                }
            case 3:
                {
                    ifstream arquivo("09.txt",ios::app);
                    file_ok(arquivo);

                    string nome_procurado;
                    cout << "Digite o nome do produto desejado: ";
                    cin >> nome_procurado;

                    procurar_nome(arquivo, nome_procurado);
                    break;
                }
            case 4:
            {
                cout << "Saindo!!!";
                break;
            }          
            case -1:
            {
                ofstream arquivo("09.txt");
                limpar_bd(arquivo);
                break;
            }      
            default:
            {
                cout << "Inválido, tente novamente"<<endl<<endl;
                break;
            }

        }
    }while(op != 4);
}