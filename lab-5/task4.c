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
            /*&str[len-2] r str + len-2 same meaning
            eta dara bojhay str er {len - 2 (assuming len-2=3)} 3 number character(index 4) 
            theke '\0'(null character) pawa porjonto read korte thakbe.
            for example

            str = "abcdef", length = 6
            then, str+len-2  = ef
            cause, len -2 = 6-2 = 4 , so, str+4 = ef (it will read from the strings 4th character(means 5th index). index -> a(1st/first character but, index=0), b(2nd character but, index=1), c(2), d(3), e(4), f(5))
            
            reference for me of the future :3
            
            */
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