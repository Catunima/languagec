/*
Author: Eduardo Flores
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){

    float perimeter, width = 0, height = 0;

    printf("Please, enter the height of rectangle: ");
    scanf("%f", &height);

    printf("Now, please enter the width: ");
    scanf("%f", &width);

    perimeter = 2*width + 2*height; //formula to get the perimeter.

    printf("the perimeter is: %f\n", perimeter);

    system("pause");
    return 0;    
}