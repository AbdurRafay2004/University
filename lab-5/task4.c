#include <stdio.h>
#include <string.h>
int main()
{
    /*
    if input < 4 , taile input = input                  [printf(input);]
    if input > 3 , taile input+"er"                     [strcat(input, "er")]
    if input > 3 && + "er" , replace "er" with "est"    *doesnt work[length, len-2, comp[len-2]with "er" ] *alternative[strcpy[len-2]]
    if input > 3 && + "est" , input = input                     ||
    */
    char str[100];
    int len=0;

    gets(str);

    len = strlen(str);
    // printf("%d", len);

    if(len<4)
        {
            puts(str);
        }
    else if (len>3)
        {
            if(strcmp(&str[len-2], "er")==0)
                {
                    strcpy(&str[len-2], "est");
                    puts(str);
                }
            else if(strcmp(&str[len-3], "est")==0)
                    {
                        puts(str);
                    }    
            else
                {
                    strcat(str, "er");
                    puts(str);
                }
        }
    

    return 0;
}