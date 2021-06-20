/*
Author: Eduardo Flores
*/

#include<stdio.h>
#include<stdlib.h>


int main(void){

    char line[100];
    int hr;
    double hourly_wave;
    double weekly_pay;
    int extra_hours;

    printf("please, tell me the number of hours worked\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &hr);

    printf("Enter the hourly wage\n");
    printf("$");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &hourly_wave);

    if(hr > 40){
    extra_hours = hr - 40; //only de extra hours

    //40 hours normal pay + overtime paid like an hour and a half
    weekly_pay = ((40)*(hourly_wave))+
    ((extra_hours)*(pow(hourly_wave, 1.5)));.

    } else {
    weekly_pay = (hr)*(hourly_wave); //Normal pay
    }

    printf("The weekly pay is: $ %lf",weekly_pay);

    system("pause");
    return 0;
}