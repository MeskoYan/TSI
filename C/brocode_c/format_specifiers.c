#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 19, val_1 = 20, val_2 = 30, val_3 = -40, size = 20;
    float price = 12.2, width = 15.5, humongus = -10.2, height = 1.73;
    double pi = 3.14159123;
    char symbol = '$';
    char name[] = "Yan Mesko da Silva";

    printf("%d \n",age);
    printf("%.2f \n",price);
    printf("%.2lf \n",pi);
    printf("%c \n\n",symbol);
    printf("%s \n\n", name);

    printf("%d\n",val_1);
    printf("%4d\n",val_2);
    printf("%5d\n\n",val_3);

    printf("%-4d\n",val_1);
    printf("%-4d\n",val_2);
    printf("%-4d\n\n",val_3);

    printf("%+d\n",val_1);
    printf("%+d\n",val_2);
    printf("%+d\n\n",val_3);

    printf("%.2f\n",width);
    printf("%.2f\n",humongus);
    printf("%.2f\n\n",height);

    printf("%+4.2f\n",width);
    printf("%+5.2f\n",humongus);
    printf("%+6.2f\n\n",height);

    system("pause");
    return 0;

}