#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number ");
    scanf("%d", &number);

    if(number%2 == 0 || number%5 == 0)
    {
        if(number%2 == 0 && number%5 == 0)
            printf("Multiple of 2 and 5 both");

        else
            printf("Either 2 or 5 but not both");
    }
    else
        printf("Not a multiple we want");

    return 0;
    
}