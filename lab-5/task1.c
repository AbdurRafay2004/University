#include <stdio.h>
int main()
{
    char str_inp[50];
    // gets(str_inp);
    scanf("%[^\n]", &str_inp);
    // puts(str_inp);

    int count=0;

    for(int i=0; str_inp[i]!= '\0' ;i++)
        {
            count++;
        }

    for(int i=count; i>=0; i--)
        {
            printf("%c", str_inp[i]);
        }
    
    return 0;
}