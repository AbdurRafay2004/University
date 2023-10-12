#include <stdio.h>

int main()
{
    int s;  //float L ta eikhane nile 2nd condition er jonno vul answer asbe

    printf("Enter the value of S to calculate the value of L: ");
    scanf("%d", &s);

    if(s<100)
    {
        float l = 3000-125*(s*s);
        printf("The value of L: %f", l);
    }
    else if(s>=100)
    {
        float l = 12000/(4+(s*s)/14900);
        printf("The value of L: %f", l);
    }
}