#include <stdio.h>
int main()
{
    int number;

    printf("enter a number ");
    scanf("%d", &number);

    if(number%2 == 0 && number%5 == 0)
        printf("Multiple of 2 and 5");

    else
        printf("Not multiple of 2 and 5 both");
    
    

    return 0;
    
}