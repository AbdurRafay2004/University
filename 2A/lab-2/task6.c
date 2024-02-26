#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%2 == 0 || number%5==0){
        printf("Multiple of 2 or 5");
    }
    else
        printf("Not a multiple of 2 or 5");
}