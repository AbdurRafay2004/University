#include <stdio.h>

int main()
{
    int s;  

    printf("Enter the value of S to calculate the value of L: ");
    scanf("%d", &s);

    if(s<100)
    {
        float l = 3000-125*((float)s*s); //typecast
        printf("The value of L: %f", l);
    }
    else if(s>=100)
    {
        float l = 12000/(4+((float)s*s)/14900);
        printf("The value of L: %f", l);
    }

    return 0;
}