#include <stdio.h>
int main()
{
    int array[7], n,i,max,index=0;

    printf("Enter 7 numbers separated by commas: ");
    for(i=0; i<7; i++)
        {
            scanf("%d,",&array[i]);
        }
    printf("My array [");
    max= array[0];
    for(i=0;i<7;i++)
        {
            if(array[i]>max)//to determine which is bigger
                {
                    max=array[i];
                    index = i;
                }
            printf("%d",array[i]);
            if(i!=6)
                {
                    printf(",");
                }
        }
    printf("]");

    printf("\nLargest number in the array is %d which was found at index %d.",max,index);


    

    return 0;


}