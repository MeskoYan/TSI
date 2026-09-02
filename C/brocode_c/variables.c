#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    //variable = placeholder for values
    //int = 4 bytes
    //float = single-precision 4 bytes
    //double = double-precision 8 bytes
    //char = single character
    //char[] = array of characters
    //bool = true or false requires <stdbool.h>

    int age = 25, year = 2025, qtd = 1;

    float grade = 10.0;
    double pi = 3.1415921231531513;

    char other_grade = 'A';
    char name[] = "yanzao";
    char food[] = "panqueca";

    bool is_online = true;

    printf("you have %d years old \n",age);
    printf("The year is now in %d \n",year);
    printf("You ordered %d x itens \n",qtd);
    printf("your grade is %.2f \n",grade);
    printf("printing doubles %.6lf \n",pi);
    printf("Your other grade is %c \n",other_grade);
    printf("My name is %s \n",name);
    printf("Favorite food: %s \n",food);
    printf("Is online %d \n",is_online);
    is_online = false;
    printf("Is online %d \n",is_online);


    system("pause");
    return 0;
}
