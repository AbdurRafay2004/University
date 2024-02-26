#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    gets(word);
    int len = strlen(word);


    if(strlen(word)<4)
        {
            puts(word);
        }

    else if( len>3 && strcmp(word + len-2, "er")==0 )
        {
            strcpy(&word[len-2], "est");
            puts(word); 
        }
    else if (len>3 && strcmp(word + len-3, "est")==0 )
        {
            puts(word);
        }
    else
        {
            strcat(word,"er");
            puts(word);
        }

   return 0;
}