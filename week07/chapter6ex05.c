#include<stdlib.h>
#include<stdio.h>

int main(void){

    int year;
    char line[5]="";
   printf("please, Enter a year: ");
   fgets(line,sizeof(line),stdin);
   sscanf(line,"%d", &year);

   if (year % 400 == 0 && year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else if (year % 100 == 0) {
      printf("%d is not a leap year.\n", year);
   }
   

    system("pause");
    return 0;
}