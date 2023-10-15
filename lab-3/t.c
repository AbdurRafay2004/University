#include <stdio.h>
int main()
{
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