#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n =0;
    int amount = 0, ct = 0;
    float average, sum = 0;
    char line[5] = "";

    printf("how many number do you need? ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &amount);

    while (ct != amount)
    {
        printf("Enter the number %d: ", ct);
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &n);

        sum = sum + n;
        ct++;
    }
    
    average = sum/amount;

    printf("the average is: %f", average);

    system("pause");
    return 0;
}