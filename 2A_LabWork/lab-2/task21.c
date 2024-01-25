#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
     
    if (!(number % 2 == 0) || !(number % 5 == 0))
    {
        printf("%d",number);
    }
    else
        printf("No");
}