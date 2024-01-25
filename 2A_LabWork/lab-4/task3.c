#include <stdio.h>
int main()
{
    int array[5];

    printf("Enter 5 numbers below\n");
    int i=0;
    while(i<5)
        {
            scanf("%d", &array[i]);
            i++;
        }
    printf("Printing values from the array in reverse order:\n");
    for(int i=4; i>=0; i--)
        {
            printf("%d", array[i]);
            if(i!=0)
                {
                    printf("\n");
                }
        }
    
}