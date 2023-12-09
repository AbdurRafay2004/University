#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    gets(str);
    // puts(str);

    for(int i=0; i< strlen(str); i++)
        {
            if(i%2!=0)
                {
                    printf("%c", str[i]-32);// -32 to convert to uppercase
                }
        }
}