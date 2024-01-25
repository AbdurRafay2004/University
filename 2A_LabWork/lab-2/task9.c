#include <stdio.h>

int main()
{
    //writing a program that finds the number of hours, minutes, and seconds in a given number of seconds. the number of seconds is taken as input from the user.

    int useconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &useconds);

    int hours = useconds / 3600;

    int minutes = (useconds % 3600)/ 60;

    int seconds = (useconds % 3600) % 60;
    
    printf("%d Hours %d Minutes %d Seconds\n", hours, minutes, seconds);
    return 0;
}