#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int modulus = num%2;

    if(modulus == 0){
        printf("The number is EVEN");
    }
    else{
        printf("The number is ODD");
    }
    
    return 0;
}