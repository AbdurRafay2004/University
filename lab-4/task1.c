#include <stdio.h>
int main()
{
    int nm[5];
    for(int i=0; i<5; i++)
        {
            printf("\nEnter a number for array %d: ", i+1);
            scanf("%d", &nm[i]);
            printf("Number in the array: [");
            for(int j=0; j<=i; j++)
                {
                    printf("%d", nm[j]);
                    if(j != i)
                        {
                            printf(", ");
                        }
                }
            printf("]");
        }
}



//bellow code is the first method I tried sir 
//but it did not match with your examples sir

// #include <stdio.h>
// int main()
// {
//     int number[5],i;

//     printf("Enter 5 numbers\n");
//     for(i = 0; i <5; i++)
//         {
//             printf("Enter the number for Array %d: ", i+1);
//             scanf("%d", &number[i]);
//         }
//     int j,n=0;
//     printf("Numbers in the array: [");
//     for(j=0; j<i; j++)
//         {
//             printf("%d",number[n++]);
//             if( j!=i-1) 
//                 {
//                     printf(", ");
//                 }
//         }
//         printf("]");

//     return 0;

// }