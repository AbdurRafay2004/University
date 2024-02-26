#include<stdio.h>
#include<math.h>

int main()
{
    int A,B,C;
    float D;

    printf("Enter value for A: ");
    scanf("%d",&A);
    printf("Enter value for B: ");
    scanf("%d",&B);
    printf("Enter value for C: ");
    scanf("%d",&C);
    printf("Enter value for D: ");
    scanf("%f",&D);

    int result = (pow(A,C))+B*A-(D/3);

    printf("Out of the formula = %d", result);

    return 0;
}