#include<stdlib.h>
#include<stdio.h>

int main(void){
    int ct1 =0, ct2=0,ct3 = 0;
    for(int i = 0;i <= 8;i++){
        while(ct1 != 40){
            if(ct1 == 39){
                printf("-\n");
            }else{
                printf("-");
            }
            ct1++;
            
        }
        if(i !=8){
            while(ct2 !=3){
                    while (ct3 != 9)
                    {
                        if (ct3 == 8)
                        {
                            printf("|\n");
                        }else{
                            printf("|    ");
                        }
                        ct3++;
                    }
                    ct2++;
                    ct3 = 0;    
                }
        }

        ct1=0;
        ct3 = 0;
        ct2=0;
    }
    system("pause");
    return 0;
}