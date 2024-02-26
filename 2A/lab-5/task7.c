#include <stdio.h>
#include <string.h>
int main()
{
    /* some conditions= if input = z, taile input = a */
    char str[100];
    gets(str);
    // puts(str);
    for(int i = 0; i< strlen(str); i++)
        {
            if (str[i]=='z')
                { printf("%c", str[i] = 'a'); }
            else
                { printf("%c", str[i]+1); }
        }
    return 0;

}