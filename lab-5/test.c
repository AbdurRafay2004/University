#include <stdio.h>
#include <string.h>

int main()
{
    /*
    if input < 4 , taile input = input                  [printf(input);]
    if input > 3 , taile input+"er"                     [strcat(input, "er")]
    if input > 3 && + "er" , replace "er" with "est"    [length, len-2, comp[len-2]with "er" ]
    if input > 3 && + "est" , input = input                     ||
    */

   char input[100];
   gets(input);
    int len = 0; 
   for(int i=0; input[i]!='\0'; i++)
    {
        len++;
    }

    // printf("%d",len);
    // printf("\n");
    // printf(input);

    if(strcmp(&input[len-2],"er")==0)
        {
            strcpy(&input[len-2], "est");
            printf(input);
        }
    else
        printf("hoynai");
}