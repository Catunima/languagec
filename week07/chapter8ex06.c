#include<stdlib.h>
#include<stdio.h>

int main(void){

    char line[5]="";
    int ct=0;

    printf("please, give one number without space: ");
    fgets(line, sizeof(line), stdin);

    while (ct !=5)
    {
            
        switch (line[ct])
        {
        case '0':
            printf("cero ");
            break;
        case '1':
            printf("one ");
            break;
        case '2':
            printf("two ");
            break;
        case '3':
            printf("three ");
            break;
        case '4':
            printf("four ");
            break;
        case '5':
            printf("five ");
            break;
        case '6':
            printf("six ");
            break;
        case '7':
            printf("Seven ");
            break;
        case '8':
            printf("eight ");
            break;
        case '9':
            printf("nine ");
            break;
        default:
            printf(" \n");
            break;
        }
        ct++;
    }
    

    system("pause");
    return 0;
}