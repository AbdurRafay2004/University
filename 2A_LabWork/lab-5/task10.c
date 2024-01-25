#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str1[100], str2[100];
    int len1, len2, i, j, k;

    printf("Enter two strings separated by a comma and a space: ");
    scanf("%[^,], %[^\n]", str1, str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 > len2)
    {
        strcpy(str, str1);
    }
    else
    {
        strcpy(str, str2);
    }

    k = 0;

    for (i = 0, j = 0; i < len1 && j < len2; i++, j++)
    {
        str[k++] = str1[i];
        str[k++] = str2[j];
    }

    if (i < len1)
    {
        strncpy(&str[k], &str1[i], len1 - i);
        k += len1 - i;
    }

    if (j < len2)
    {
        strncpy(&str[k], &str2[j], len2 - j);
        k += len2 - j;
    }

    str[k] = '\0';

    printf("The mixed string is: %s", str);

    return 0;
}
