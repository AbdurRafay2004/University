#include <stdio.h>
int main()
{
    int array[100], items;
    printf("How many item should your array contain?: ");
    scanf("%d", &items);
    printf("Enter the items below\n");

    int i=0;
    while(i<items)
        {
            printf("Enter item %d: ", i+1);
            scanf("%d", &array[i]);
            i++;
        }
    
    printf("\nGiven array\n");
    printf("[");
    for(i=0; i<items; i++)
        {
            printf("%d", array[i]);
            if(i!=items-1)
                {
                    printf(", ");
                }
        }
    printf("]");
    
    printf("\n\nSquare of all items in the array\n");

    printf("[");
    for(i=0; i<items; i++)
        {
            printf("%d", array[i]*array[i]);
            if(i!=items-1)
                {
                    printf(", ");
                }
        }
    printf("]\n\n\n");




    // printf("Number in the Array: [%d, %d, %d, %d, %d]", array[0], array[1], array[2], array[3], array[4]);

}