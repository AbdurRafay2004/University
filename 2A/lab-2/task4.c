#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter two numbers ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        int dif = num1-num2;
        printf("Difference: %d", dif);
    }
    else{
        int dif = num2-num1;
        printf("Difference: %d", dif);
    }

}