#include<stdio.h>

int main()
{
    int chocolate, destribution, remaining;
    //i have to divide the chocolate by 3
    //and remainings are mine

    printf("How many Chocolates do have? ");
    scanf("%d", &chocolate);

    //destributing the chocolate to 3 ppl
    destribution = chocolate/3;
    remaining = chocolate%3;// % ->its called modulo operator, it computes the remainder of the devidence. -_-

    printf("Each friend will receive %d chocolates", destribution);
    printf("\nThe number of remaining chocolates are %d", remaining);
    
    // return 0; // this line is giving me error!!
}