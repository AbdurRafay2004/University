#include <stdio.h>
int main()
{
    int i=24;
    printf("a: ");
    for(i=i; i >= -6; i-=6)
        {
            printf("%d, ",i);
        }
    printf("\nb: ");
    for(int j= -10; j<=20; j+=5)
        {
            printf("%d, ",j);
        }
    printf("\nc: ");
    for(int k=18; k<=63; k+=9)
        {
            printf("%d, ",k);
        }
    printf("\nd: ");
    for(int x=18; x<=63;x+=9)
        {
            if(x%2==0)
                {
                    printf("%d, ",x);
                }
            else
                {
                    printf("%d, ",-x);
                }
        }
}