#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void){
    
    char line[10] = "";

    float resistance;
    float ct;
    bool is = true;

    while (ct == true);
    {
        printf("please, give me the resistance in ohms: ");
        fgets(line, sizeof(line),stdin);
        sscanf(line,"%f", &resistance);
        if(resistance == 0){
            printf("%f", 1/ct);
            is = false;
        }

        ct+=1/resistance;
    }
    

    system("pause");
    return 0;
}