#include <stdio.h>
int main()
{
    int user, count=0, sum=0;
    printf("Enter a number: ");
    scanf("%d",&user);

    for(int i=1; i<=user; i++)
        {
            if(user%i==0)
                {
                    sum += (i!=user ? i : 0);  
                }
            count++;
        }
        if (user == sum)
            {
                printf("%d is perfect number", user);
            }
        else
            {
                printf("%d is not perfect number", user);
            }
}