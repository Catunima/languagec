#include<stdlib.h>
#include<stdio.h>
int ct = 1;
char line[9];

int main(void){
    //bucle para mantener activo el programa hasta que se indique lo contrario
    while(ct != 0){
        printf("***Ley Ohm***\n");
        menu();
    }
    

    system("pause");
    
}
//funcion para mostrar un menú
int menu(void){
    int option = 0;

    printf("Choose one option.\n");
    

    printf("0.- exit \n1.- Voltage\n2.-Current\n3.-Resistance\n");
    printf("> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &option);
    

    ohm(option);


    return option;
}
//función encargado de las operaciones
int ohm(int type){
    float result = 0;
    float v, i,r;//variables necesarios para la ley de ohm

    if(type == 0){
        //exit
        ct = 0;
        printf("See you later!\n");
        return 0;
    }else if(type == 1){
        //voltage
        printf("current >");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f", &i);
        printf("resistance >");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f", &r);

        result = i*r;
        printf("V = %f\n", result);
        
    }else if(type == 2){
        //current
        printf("voltage >");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f", &v);
        printf("resistance >");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f", &r);

        result = v/r;
        printf("I = %f\n", result);
    }else if(type == 3){
        //resistance
        printf(" voltage>");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f", &v);
        printf("current >");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f", &i);

        result = v/i;
        printf("R = %f\n", result);
    }else{
        //if the user has a error
        printf("please, use a command valid!\n");
    }


    return result;
}