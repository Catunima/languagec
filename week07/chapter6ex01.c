/*
Author:Eduardo Flores

Note: some ideas of this program is the page: https://technotip.com/7339/c-program-to-calculate-distance-between-two-points/ to get the formula.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>//librería para herramientas de matematicas

int main(void){
    //para prevenir un error durante la ejecución las variables que reciban datos deben de estar inicializadas en cero con el fin de que por error no se ingresen valores, este no saque un error. Esto igual se puede prevenir por medio de sentencias if-else
    float x1 = 0,y1 = 0 ,x2 = 0,y2 = 0, d;
    char cadena[3]="";
    //Se solicitan la ubicación del primer punto(x,y)
    printf("Please, enter the point 1 x: ");
    fgets(cadena,sizeof(cadena),stdin);
    sscanf(cadena, "%f", &x1);
    printf("please enter the point 1 y: ");
    fgets(cadena,sizeof(cadena),stdin);
    sscanf(cadena, "%f", &y1);
    //se solicitan la ubicación del segundo punto
    printf("please, enter the point 2 x: ");
    fgets(cadena,sizeof(cadena),stdin);
    sscanf(cadena, "%f", &x2);
    printf("please, enter the point 2 y: ");
    fgets(cadena, sizeof(cadena),stdin);
    sscanf(cadena, "%f", &y2);

    //Se imprimen para que el usuario verifique los puntos ingresados
    printf("\npoint 1: (%f,%f)\n\n", x1,y1);
    printf("point 2: (%f,%f)\n\n", x2,y2);

    d = sqrt((x2 - x1)*(x2 - x1)+(y2-y1)*(y2-y1));//formula para obtener la distancia entre dos puntos

    printf("the distance between two points is: %f\n", d);


    system("pause");
    return 0;
}