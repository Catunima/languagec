
/*
Write a program to perform date arithmetic such as how many days 
there are between 6/6/90 and 4/3/92
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("how many days there are between 6/6/90 and 4/3/92?\n");

    int result = 24+186+365+63;
    /*june has 30 days less 6 for the day of the first date is 24 and 186 are the days fot the end of the year
    the second date is after two year, but the second year is not full, so have to addition one year "365" and the 63 is 
    for the year 92 in which there are two months and 4 days.
    */
   printf("> %d days\n", result);

    system("pause");
    return 0;
}