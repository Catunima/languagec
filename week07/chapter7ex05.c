#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void){

    char line[4] = "";
    int num = 0,ct = 0;
    bool isPrime = false;
    

    printf("Please, give me one number: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num);

    //el numero 0 y 1 no son primos por lo tanto podemos descartar el numero 0 y 1.
    if(num == 0 || num == 1 || num == 4){
        isPrime = false;
    }else{
        for(int x = 2; x < (num/2);x++){
            if (num % x == 0)
            {
                ct++;
            }
            
        }
        if (ct > 0)
        {
            isPrime = false;
        }else{
            isPrime = true;
        }
        

    }

    if (isPrime == true)
    {
        printf("the number %d is prime\n", num);    
    }else{
        printf("the number %d is not prime\n", num);
    }
    
    
    system("pause");
    return 0;
}