#include <stdio.h>
int main()
{
    int n, count =0;
    printf("Give me some numbers: ");
    scanf("%d", &n);

    while(n != 0)
        {
            n = n/10;
            count++;
        }
    printf("Total digits: %d", count);

}