#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    i=0;
    while(i<n)
        {
            int sp_unit = n%10;
            printf("%d, ", sp_unit);
            n = n/10;

            i++;
        }
    printf("%d\n", n);
}