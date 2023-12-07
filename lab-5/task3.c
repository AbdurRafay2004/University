#include <stdio.h>
int main()
{
    char str[100];
    int count=0;
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i] != '1' && str[i] != '0')
                count++;
            else 
                continue;
        }
    
    if(count==0)
        printf("Binary Number");
    else
        printf("Not a Binary Number");
}