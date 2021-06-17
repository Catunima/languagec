/*
Author: Eduardo Flores
*/

#include<stdlib.h>
#include<stdio.h>

int main(void){

    float centi = 0, fahren = 0;//la variable centi es la que recibira el dato par convertir

    printf("Please, enter your temperature on centigrade: ");
    scanf("%f", &centi);

    fahren = (centi * 9/5) + 32;

    printf(" %fF\n",fahren);


    system("pause");
    return 0;
}