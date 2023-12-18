//from time(seconds) to time(hour:minute:seconds)
#include <stdio.h>
int main()
{
    int time, mod;
    scanf("%d", &time);

    int hour = time/3600;
    mod = time%3600;
    int minute = mod/60;
    mod = mod%60;
    int second = mod;

    printf("%d:%d:%d\n", hour, minute, second);

    return 0;
}