#include <stdio.h>
int main()
{
    int num1,num2;

    printf("\nEnter two numbers: ");
    scanf("%d %d",&num1,&num2);

    if(num1 > num2){
        printf("\nFirst number is greater\n");
    }
    else if(num2 > num1){
        printf("\nSecond number is greater\n");
    }
    else
        printf("\nThe numbers are equal\n");


}