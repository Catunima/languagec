#include<stdlib.h>
#include<stdio.h>

int main(void){

    int year;
   printf("please, Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0 && year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else if (year % 100 == 0) {
      printf("%d is not a leap year.\n", year);
   }
   

    system("pause");
    return 0;
}