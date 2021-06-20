#include<stdio.h>
#include<stdlib.h>

int main(void){

    if (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)
        return 1;
    else
        return 0;

}

//function to calculate the days between to dates.
int daysBetweenDates(int start_date[], int end_date[]) {
    int days = 0; /*****THIS IS WHERE THE ERROR WAS I DIDN'T INITIALIZE THE VARIABLE*****/ //variable to keep track of the days counted.
    int month_counter, year_counter; //counters for the current month and year in the loops.

    //loop over the years
    for (year_counter = start_date[2]; year_counter <= end_date[2];
            year_counter += 1) {

        if (year_counter == start_date[2]) //if we're in the beginning year,
            month_counter = start_date[0]; //start the month counter at the given start month.
        else
            month_counter = 1; //otherwise start in January.

        //loop through the months
        while (month_counter <= 12) {

            //if we're in the final month of the final year we break and add the days in that month separately.
            if (year_counter == end_date[2] && month_counter == end_date[0])
                break;

            //add the number of days in the current month to the days variable.
            switch (month_counter) {

            case 1:
                days += 31;
                break;
            case 2:
                days += 28;
                //add extra day for leap years.
                if (leapYear(year_counter))
                    days += 1;
                break;
            case 3:
                days += 31;
                break;
            case 4:
                days += 30;
                break;
            case 5:
                days += 31;
                break;
            case 6:
                days += 30;
                break;
            case 7:
                days += 31;
                break;
            case 8:
                days += 31;
                break;
            case 9:
                days += 30;
                break;
            case 10:
                days += 31;
                break;
            case 11:
                days += 30;
                break;
            case 12:
                days += 31;
                break;
            default:
                break;

            }

            //next month.
            month_counter += 1;
        }
    system("pause");
    return 0;
}