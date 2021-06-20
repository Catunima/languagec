#include<stdlib.h>
#include<stdio.h>

int main(void){

    float km = 0.621371, miles = 1.60934, liters = 0.264172, gallons = 3.78541, result = 0, value = 0;
    int option = 0;
    printf("**********welcome to unit converter!**********");
    do{
        printf("\n\nChoose your type of unit(Enter the number example: 1)\n\n 1.- Exit \n 2.- English unit\n 3.- metric\n");
        printf(">");
        scanf("%d", &option);

        if(option >= 1 && option <= 3){
            if (option == 2)
            {
                printf("***English unit***\n\n");
                option = 0;
                printf("1.- Exit\n2.-miles to kilometers\n3.- gallons to liters\n");
                printf(">");
                scanf("%d", &option);
                if(option >= 1 && option <= 3){
                    if(option == 2){
                        printf("miles: ");
                        scanf("%f", &value);
                        result = value * miles;
                        printf("%f km", result);
                    }else if(option == 3){
                        printf("galons: ");
                        scanf("%f", &value);
                        result = value * gallons;
                        printf("%f L", result);
                    }
                }
            }else if(option == 3){
                printf("***Metric***\n\n");
                option = 0;
                printf("1.- Exit\n2.-kilometers to milles\n3.- liters to gallons\n");
                printf(">");
                scanf("%d", &option);
                if(option >= 1 && option <= 3){
                    if(option == 2){
                        printf("kilometers: ");
                        scanf("%f", &value);
                        result = value / km;
                        printf("%f miles", result);
                    }else if(option == 3){
                        printf("liters: ");
                        scanf("%f", &value);
                        result = value / liters;
                        printf("%f gallons", result);
                    }
                }
            }else{
                printf("See you later!\n");
            }
            
        }else{
            printf("Fail: command invalid, please choose one option\n");
        }
        result = 0;
    }while (option != 1);
    

    system("pause");
    return 0;
}