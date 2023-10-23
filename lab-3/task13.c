#include <stdio.h>
int main()
{
    int user, count=0;
    printf("Enter a number: ");
    scanf("%d", &user);

    for (int i=1; i<=user; i++)
        {
            if (user%i==0)
                {
                    printf("%d\n", i);
                    count++;
                }
        }
    printf("Total of %d divisors\n\n", count);
    
}