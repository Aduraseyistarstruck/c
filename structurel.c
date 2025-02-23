#include <stdio.h>
int main (void){
    struct date {
        int month;
        int day;
        int year;
    };
    struct date today;
    today = {.day = 25; .month = 9; .year = 2024}//seems there's an error somewhere here.
    printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year %100);
    return 0;
}