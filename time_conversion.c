#include <stdio.h>
 
int main() {
 
    // int num, year, month, day;
    // scanf("%d", &num);

    // year = num / 365; 
    // day = num % 365;
    // month = day / 30; 
    // day = day % 30;

    // printf ("Years = %d\n", year);
    // printf ("Months = %d\n", month);
    // printf ("Days = %d\n", day);

 

 
    int hour, minute, second, time;
    scanf ("%d", &time);

    hour = time / 3600;
    second = time % 3600;
    minute = second / 60;
    second = second % 60;

    printf ("Hours = %d\n", hour);
    printf ("Minutes = %d\n", minute);
    printf ("Seconds = %d\n", second);


    return 0;
}