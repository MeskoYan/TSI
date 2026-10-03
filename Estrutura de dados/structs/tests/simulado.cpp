#include <stdio.h>
#include <math.h>
/* Crie uma função que dado um vetor contendo inteiros positivos e negativos ordene o vetor indepenente do sinal
 void ordenavetor(int *entrada, int tam, int *saida)
*/

void ordenavetor(int *entrada, int tam, int *saida) {
    // Complete o código
    int holder, i, j;
    
    //Aqui só passa entrada pra saida pra não mexer na entrada
    for( i = 0; i < tam; i++){
        saida[i] = entrada[i];
    }
    
    for( i = 0; i < tam; i++){
        for(j = i+1; j < tam; j++){
           if (abs(saida[j])<abs(saida[i])){
               holder = saida[j];
               saida[j] = saida[i];
               saida[i] = holder;
           }   
        }
    }
    
}

int main(void) {
    
    int vetor[100], saida[100], tam;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);
    
    for (int i=0;i<tam;i++) {
        scanf("%d", &vetor[i]);
    }
    
    ordenavetor(vetor,tam,saida);
    
    for (int i=0;i<tam;i++) {
        printf("%d ", saida[i]);
    }
}
