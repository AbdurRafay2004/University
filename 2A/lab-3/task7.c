#include <stdio.h>
int main()
{
    int n, sum =0, count =0;
    printf("Enter 10 numbers\n");

    int i=1;
    while(i<=10)
        {
            scanf("%d", &n);

            if(n%2!=0){
                sum += n;
                count++;
            }
            i++;
        }
    printf("The total of the odd is %d and their average is %.2f \n", sum, (float)sum/count);
}