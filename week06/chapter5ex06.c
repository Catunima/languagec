/*
author: Eduardo Flores
Note: This is the same code of the week 5 in my program ex02second with the differen this is of minute, so
I'm going to take the last code and use the logic.
*/

#include<stdlib.h>
#include<stdio.h>

int main(void){

    int mn = 0, hr, min;

    printf("Please, enter your minutes: ");
    scanf("%d", &mn);

    hr = (mn/60);
    min = mn - (hr*60);

    
  if(hr <10){
    printf("0%d:",hr);
  }else{
    printf("%d:",hr);
  }
  if(min<10){
    printf("0%d:",min);
  }else{
    printf("%d:",min);
  }

    system("pause");
    return 0;
}