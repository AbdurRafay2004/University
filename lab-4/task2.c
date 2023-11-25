#include <stdio.h>
int main()
{
    int elements=0, array[100], i, j;

    printf("Enter the amount of the elements you want to enclude in the array: ");
    scanf("%d", &elements);
    if(elements<4)
        {
            printf("Not possible to continue");
            return 0;
        }
        
    printf("Enter the elements now\n");

    for(i=0; i<elements; i++)
        {
            scanf("%d", &array[i]);
        }
    
    printf("User input: [");
    for(i=0 ; i<elements ; i++)
        {
            printf("%d", array[i]);
            if(i != elements-1)
                {
                    printf(", ");
                }
        }
    printf("]");
    
    printf("\nAfter excluding the first and last two elements.");
    printf("\nNew array: [");

    for(i=2 ; i<elements-2 ; i++)
        {
            printf("%d", array[i]);
            if(i != elements-3)
                {
                    printf(", ");
                }
        }
    printf("]");

    return 0;

}