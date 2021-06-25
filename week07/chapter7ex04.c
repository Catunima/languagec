#include<stdlib.h>
#include<stdio.h>

int main(void){

    float money = 0, result;
    char line[6] = 0;


    printf("Please, enter a mount: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%f", &money);

    result = money * 0.8;

    printf("%f", result);

    system("pause");
    return 0;
}