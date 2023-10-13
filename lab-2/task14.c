#include <stdio.h>

int main()
{
    int distance_in_meters, time_in_seconds;
    
    printf("Enter meter: ");
    scanf("%d",&distance_in_meters);
    printf("Enter time in seconds: ");
    scanf("%d",&time_in_seconds);

    double velocity = ((double)distance_in_meters/1000)/(time_in_seconds/3600);
    printf("%0.1lf km/h\n",velocity);

    if(velocity<60)
        {
            printf("Too slow, Needs more changes");
        }
    else if(velocity>60 && velocity<90)
        {
            printf("Velocity is okay. the car is ready");
        }
    else if(velocity>90)
        {
            printf("Too fast, only a few changes should suffice");
        }
    
    return 0;
}