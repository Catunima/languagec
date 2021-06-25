#include<stdio.h>
#include<stdlib.h>

int main(void){

    char line[4] = "";
    int amount = 0, num = 0;
    int ctnegative = 0, ctpositive=0, ct = 0;


    printf("How many numbers are you gong to enter? ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &amount);

    do
    {
        printf("Enter the number: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &num);
        if (num >= 0)
        {
            ctpositive++;
        }else{
            ctnegative++;
        }
        ct++;
    } while (ct != amount);
    
    printf("there are %d positive and %d negative.\n", ctpositive, ctnegative);

    system("pause");
    return 0;
}