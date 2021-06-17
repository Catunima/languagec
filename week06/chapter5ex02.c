#include<stdlib.h>
#include<stdio.h>

int main(void){

    float pi =3.1416, r = 0, result;//r es el radio de la esfera

    printf("please, enter your radius: ");
    scanf("%f", &r);

    result = (4/3)*pi*(r*r*r);

    printf("the volume is: %f\n", result);

    system("pause");
    return 0;
}