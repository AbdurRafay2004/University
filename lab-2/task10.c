#include <stdio.h>

int main()
{
    //input weekly hour
    //checks if the input is valid
    //if hour is <= 40 | 200tk per hour
    // if  > 40 | 8000tk + hour-40 *300
    
    int worked;
    printf("Hours worked this week: ");
    scanf("%d", &worked);

    if( worked < 0 || worked > 168)
    {
        if(worked > 168)
        {
            printf("Impossible to work more than 168 hours");
        }
        else
            printf("Hours cannot be negative");
    }
    
    else if(worked <= 40)
    {
        printf("This weeks pay: %d", worked*200);   //solved the math together
    }
    else if(worked > 40)
    {
        printf("This weeks pay: %d", 8000+((worked-40)*300));
    }
}