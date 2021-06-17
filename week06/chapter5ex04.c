/*
Author: Eduardo Flores
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){

    float km = 0, miles;//km is the variable that save the value

    printf("Please, enter your velocity on km per hour: ");
    scanf("%f", &km);

    miles = km * 0.62137;

    printf("the velocity is: %f miles per hour.\n", miles);

    system("pause");
    return 0;
}