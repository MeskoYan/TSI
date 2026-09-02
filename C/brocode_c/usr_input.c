#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[20] = "";

    printf("Scanning age: ");
    scanf("%d",&age);

    printf("Scanning gpa: ");
    scanf("%f",&gpa);

    printf("Scanning grade: ");
    scanf(" %c",&grade);

    getchar();
    printf("Scanning name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    printf("%s\n",name);
    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%c\n",grade);
    


    system("pause");
    return 0;
}