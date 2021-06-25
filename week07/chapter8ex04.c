#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n = 0, ct = 0, result = 0;
    char line[5];
    printf("give me one number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line, "%d", &n);

    while (ct != 11)
    {
        result = n * ct;
        printf("%d * %d = %d\n", n,ct,result);
        ct++;
    }
    

    system("pause");
    return 0;
}