#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    char nstr[100];
    // gets(str);
    // puts(str);

    scanf("%[^,], %s", str1, str2);

    puts(str1);
    puts(str2);

    int k = 0;
    int i= 0, j=0;
    for( i,j ; i<strlen(str1) && j<strlen(str2) ; i++, j++)
        {
            nstr[k++] = str1[i];
            nstr[k++] = str2[i];
        }

    printf("%d\n", i);
    printf("%d\n", j);

    int x = i*j;

    if(str1>str2)

    puts(nstr);
}