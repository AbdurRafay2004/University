#include <stdio.h>
int main()
{
    char str_input[100];
    int indexno=0, length=0;

    scanf("%[^\n] %d", &str_input, &indexno);
    // printf("%s \n %d", str_input, indexno);
    // gets(str_input);
    // scanf("%d", &indexno);

    for(int i=0; str_input[i]!='\0';i++)
        {
            length++;
        }

    for(int i=indexno ; i>=0; i--)
        {
            printf("%c", str_input[i]);
        }
    
    
    for(int i=indexno+1 ; i<=length; i++)
        {
            printf("%c", str_input[i]);
        }
    
    // for(int i=indexno+1 ; str_input[i]!='\0'; i++)
    //     {
    //         printf("%c", str_input[i]);
    //     }
    
    return 0;

}