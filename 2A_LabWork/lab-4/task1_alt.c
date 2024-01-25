#include <stdio.h>
int main()
{
    int number[5],i;

    printf("Enter 5 numbers\n");
    for(i = 0; i <5; i++)
        {
            printf("Enter the number for Array %d: ", i+1);
            scanf("%d", &number[i]);
        }
    int j,n=0;
    printf("Numbers in the array: [");
    for(j=0; j<i; j++)
        {
            printf("%d",number[n++]);
            if( j!=i-1) 
                {
                    printf(", ");
                }
        }
        printf("]");

    // printf("Number in the Array: [%d, %d, %d, %d, %d]", number[0], number[1], number[2], number[3], number[4]);

    return 0;

}