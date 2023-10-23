#include <stdio.h>
int main()
{
    printf("a) "); //A
    int num1 = 24;
    while(num1 >= -6)
        {
            printf("%d, ", num1);

            num1-=6;
        }
    
    printf("\nb) ");//B
    int num2 = -10;
    while(num2 <= 20)
        {
            printf("%d, ", num2);

            num2+=5;
        }
    
    printf("\nc) ");//C
    int num3 = 18;
    while(num3 <= 63)
        {
            printf("%d, ", num3);

            num3+=9;
        }

    printf("\nd) ");//D
    int num4 = 18;
    while(num4 <= 63)
        {
            if(num4%2==0)
                {
                    printf("%d, ",num4);
                }
            else
                {
                    printf("%d, ", -num4);
                }

            num4+=9; //inc
        }

    return 0;
}