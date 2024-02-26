#include <stdio.h>
int main()
{
    int arr_one[]={1, 4, 3, 2, 5}, arr_two[]={8, 7, 6, 9};
    int arr1_element = sizeof (arr_one)/ sizeof (arr_one[0]);
    int arr2_element = sizeof (arr_two)/ sizeof (arr_two[0]);

    int count=0,i,j;

    for(i=0; i<arr1_element; i++)
        {
            for(j=0; j<arr2_element; j++)
                {
                    if(arr_one[i]== arr_two[j])
                        {
                            count = 1;
                            break;
                        }
                }
            if(count == 1)
                break;
        }
    if(count==1)
        printf("True\n");
    else
        printf("False\n");

    return 0;


}