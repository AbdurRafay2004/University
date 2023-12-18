//finding out the spent fuel after trip
#include <stdio.h>
int main()
{
    int hour, distance;
    scanf("%d %d", &hour, &distance);
    printf("%0.3f\n", (float)(distance/12.0)*hour);//casting for float
    return 0;
}