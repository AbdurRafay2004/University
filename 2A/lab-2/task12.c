#include <stdio.h>

int main()
{
    int hour;
    printf("Enter current time= ");
    scanf("%d",&hour);

    if(hour>23 || hour<0)
        {
            printf("Wrong time");
        }
    else if(hour>=0 && hour<=23)
        {
            if(hour>=4 && hour<=6)
                {
                    printf("Breakfast");
                }
            else if(hour==12 || hour==13)
                {
                    printf("Lunch");
                }
            else if(hour==16 || hour==17)
                {
                    printf("Snacks");
                }
            else if(hour==19 || hour==20)
                {
                    printf("Dinner");
                }
            else
                printf("Patience is virtue");
        }
    return 0;
}