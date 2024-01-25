#include <stdio.h>
int main()
{
    int sum =0,i, n[5];

    printf("Enter 5 numbers:\n");
    i=0;
    while(i<5)
        {
            scanf("%d", &n[i]);
            i++;
        }
    printf("Output:\n");
    for(i=0; i<5; i++)
        {
            sum += n[i];
            printf("%d\n",sum);
        }
    
}