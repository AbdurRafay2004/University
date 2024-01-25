#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    gets(str);
    // puts(str);

    for(int i=0; i< strlen(str); i++)
        {
            printf("%c : %d\n", str[i], str[i]);
        }

}