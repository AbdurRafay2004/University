#include <stdio.h>
int main()
{
    int array_one[]={1, 3, 5, 7, 9, 10};
    int array_two[]={2, 4, 6, 8},i;

    int e1 = sizeof(array_one) / sizeof(array_one[0]);
    int e2 = sizeof(array_two) / sizeof(array_two[0]);
    // printf("%d",e1);  

    int e3= (e1+e2)-1;
    int new_array[e3];
    printf("[");
    for(i=0; i< e3; i++)
        {
            if(i<e1-1)
                {
                    new_array[i] = array_one[i];
                }
            else
                {
                    new_array[i] = array_two[i- e1+1];
                }

            printf("%d", new_array[i]);
            if (i != e3-1) 
                {
                    printf(", ");
                }
        }
    printf("]\n");
    
}