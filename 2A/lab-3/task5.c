#include <stdio.h>
int main()
{
    printf("Odd numbers between 10 to 50:\n");
    int num4 = 10;
    while(num4 <= 50)
        {
            if(num4%2==0)
                {
                    printf("%d ",num4);
                }
            
            num4++; //inc
        }
}