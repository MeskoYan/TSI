#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int y = 3;
    float z = 0;

    //% operator is between int and float

    z = x + y;
    z=x - y;
    z=x * y;
    z = x  /y;
    z= x % y;
    
    x+=2;
    printf("%d\n",x);
    y ++;
    printf("%d\n",y);
    
    printf("%.2f\n",z);

    system("pause");
    return 0;
}