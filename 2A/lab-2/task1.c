#include <stdio.h>

int main()
{
    int num1, num2;

    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    //sumation
    int sum = num1+num2;
    //product/multiplication
    int product = num1*num2;
    //dividence 
    int difference = num1-num2;

    //output
    printf("sumation = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Difference = %d\n\n", difference);


    
}