#include <stdio.h>
int main()
{
    char string[100];
    int i;
    printf("Enter some inputs: ");

    scanf("%[^\n]", &string);//reads a string with space until \n
    printf("sm= %c ", string[2]);

}