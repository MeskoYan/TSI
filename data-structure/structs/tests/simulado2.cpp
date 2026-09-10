#include <stdio.h>
#include <string>

//TODO: CRIE AS STRUCTS

using namespace std;

struct Funcionario{
    int id;
    char nome[100];
    float salario;
};

int main() {
    int n=3;
    struct Funcionario funcionarios[n];
    for (int i = 0; i < n; i++) {
        printf("Funcionario %d:\n", i + 1);
        printf("Digite o ID: \n");
        scanf("%d", &funcionarios[i].id);

        printf("Digite o nome: \n");
        scanf(" %[^\n]", funcionarios[i].nome);

        printf("Digite o salario: \n");
        scanf("%f", &funcionarios[i].salario);
    }

    //ordenação
    Funcionario ord_salarios[3];
    for(int i = 0; i < 3 ; i++){
        ord_salarios[i] = funcionarios[i];
    }


    for(int i = 0; i < 3 ; i++){
        for(int j = i+1; j < 3; j++){
            if(ord_salarios[i].salario < ord_salarios[j].salario){
                
                Funcionario holder = ord_salarios[j];
                ord_salarios[j] = ord_salarios[i];
                ord_salarios[i] = holder;
                
            }
        }
    }
    

    //TODO: COMPLETE O CÓDIGO
    printf("\n--- Funcionarios Ordenados por Salario (maior para menor) ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Nome: %s, Salario: %.2f\n", ord_salarios[i].id, ord_salarios[i].nome, ord_salarios[i].salario);
    }
    return EXIT_SUCCESS;
}