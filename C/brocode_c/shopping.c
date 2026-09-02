#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char item[50] = "";
    float price = 0.0f;
    int qtd = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What are you buying? ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\0';
    printf("%d\n",sizeof(item));

    printf("What is the price of it? ");
    scanf("%f",&price);

    printf("How many are you buying? ");
    scanf("%d",&qtd);

    total = price * qtd;

    printf("Total: %c%.2f \n",currency,total);

    system("pause");
    return 0;


}