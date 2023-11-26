#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, arr2[] = {10, 11, 12, -13, -14, -15, -16};

    int arr1_size = sizeof(arr1)/sizeof(arr1[0]), arr2_size= sizeof(arr2)/sizeof(arr2[0]);
    // printf("%d, %d", arr1_size, arr2_size);
    int element=0, i, new_arr[element];

    printf("Array 1: [");
    for(i=0; i<arr1_size; i++)
        {
            printf("%d",arr1[i]);
            if(i!=arr1_size-1)
                {
                    printf(", ");
                }
            if(arr1[i]%2==0)
                {
                    new_arr[element] = arr1[i];
                    element++;
                }
        }
    printf("]\n");

    printf("Array 1: [");
    for(i= 0; i<arr2_size; i++)
        {
            printf("%d",arr2[i]);
            if(i!=arr2_size-1)
                {
                    printf(", ");
                }
            if(arr2[i]%2==0)
                {
                    new_arr[element]= arr2[i];
                    element++;
                }
        }
    printf("]\n\n");
    
    printf("Even elements: [");
    for(i=0; i<element; i++)
        {
            printf("%d", new_arr[i]);
            if(i!=element-1)
                {
                    printf(", ");
                }
        }
    printf("]\n\n");


        // printf("Number in the Array: [%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]", new_arr[0], new_arr[1], new_arr[2], new_arr[3], new_arr[4], new_arr[5], new_arr[6], new_arr[7], new_arr[8], new_arr[9]);


}