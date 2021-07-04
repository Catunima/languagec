#include<stdio.h>
#include<stdlib.h>

    char line[100]="";
    int longitud = 0;
    int ct = 0; 

int main(void){
    
    

    printf("please, enter your words with space: ");
    fgets(line,sizeof(line), stdin);


    printf("The count of words is: %d \n", counter());
    system("pause");
    return 0;
}

int counter(void){
    int ctword = 0;
    while (ct!=101)
    {
        if(line[ct] == ' '){
            ctword++;
        }else if(ct == 100){
            ctword++;
        }
        ct++;
    }
    
    return ctword;

}