#include<stdlib.h>
#include<stdio.h>

int main(void){

    int value[] = {3,2,1,4,7,910,4,60,3};

    printf("Result: %d\n",high(value));

    system("pause");
    return 0;
}

int high(int value[]){
    int mark = 0;
    int i;

    for(i= 0; i<sizeof(value); i++){
        if(value[i]> mark){
            mark = value[i];
        }
    }
    
    return mark;
}