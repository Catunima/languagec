/*

Given an amount of money (less than $1.00), compute the number 
of quarters, dimes, nickels, and pennies needed.


Author: Eduardo Flores
codigo basado de:

https://github.com/tangledhelix/practical-c-programming/blob/main/chap_06/6-4/loose_change.c
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){

    float cents = 0.0;//varibale para guardar los centavos
    int cg = 0,quarters = 0,dimes = 0,nickels = 0,pennies =0;
    char line[4] = "";

    
    do
    {
        printf("Please, enter the number of cents: ");
        fgets(line,sizeof(line),stdin);
        sscanf(line, "%f",&cents);
        //Se comprueba que los datos se mantegan en centavos de lo contrario manda un error y vuelve a solicitar los datos.
        if (cents > 0 && cents <= 99)
        {
            cg = 1;
        }else{
            printf("Fail: The value must be less than $1.00 and more that 0\n");
            cg = 0;
        }
        
    } while (cg == 0);//the bucle is to check the number is in cents and is doing one bucle 'cause I don't want that the program close.

    
    while(1){
        if(cents>=25){
            cents -= 25;
            quarters++;
        }else if(cents>=10){
            dimes++;
            cents -= 10;
        }else if(cents >= 5){
            nickels++;
            cents -= 5;
        }else if(cents >= 1){
            pennies++;
            --cents;
        }else if(cents == 0){
            break;
        }
    }

    printf("%d quarters %d dimes %d nickels %d pennies\n", quarters, dimes, nickels, pennies);

    system("pause");
    return 0;
}