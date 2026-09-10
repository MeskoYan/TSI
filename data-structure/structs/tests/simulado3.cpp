#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip> // Required for setprecision


using namespace std;

struct Aluno{
    char nome[50];
    int matricula;
    float nota;
};

//Crie a struct
int main() {
    struct Aluno alunos[5];
    int i, indiceMaiorNota = 0;
    Aluno alunomaiornota;

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        printf("Nome: ");
        getchar(); // Limpar o buffer
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    // Calcule a maior nota
    for(int i = 0; i < 5; i++){
        if(alunos[i].nota > indiceMaiorNota){
            indiceMaiorNota = alunos[i].nota;
            alunomaiornota = alunos[i];
        }
    }

    // Exiba o resultado
    cout << "O aluno com a maior nota eh:" << endl << "Nome: " << alunomaiornota.nome << endl << "Nota: ";
    printf("%.2f",alunomaiornota.nota);
    
    return 0;
}