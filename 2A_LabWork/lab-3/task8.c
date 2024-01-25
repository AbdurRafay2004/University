#include <stdio.h>
int main()
{
    int input,sum = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    int i = 1;
    while(i<=input)
        {
            if(i%7==0)
                {
                    sum = sum + i;
                }        
            i++;
        }
    printf("The summation of multiples of 7 up to %d is = %d", input,sum);

}