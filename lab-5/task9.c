#include <stdio.h>
#include <string.h>
int main()
{
    /* if str1[i] != str1[i-1] then str2[i] = str1[i] else continue */
    char str1[100], str2[100];
    gets(str1);
    // puts(str1);
    int i=0, j=0;
    for(i,j; i< strlen(str1); i++)
        {
            if(str1[i] != str1[i-1])
                {
                    str2[j] = str1[i];
                    j++;
                }
            
            else
                continue;
        }
    
    str2[j] = '\0';
    puts(str2);
    /*
    printf("j=%d\n", j);
    printf("i=%d\n", i);
    printf("lstr2=%d\n", strlen(str2));

    for(int i=0; i<j ;i++)
        {
            printf("%c", str2[i]);
        }
    */  
    return 0;
}