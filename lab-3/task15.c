#include <stdio.h>
int main()
{
    int user, count=0;
    printf("Enter a number ");
    scanf("%d", &user);

    for(int i = 1; i<=user; i++)
        {
            if(user%i==0 && !(i==user || i== 1))
                {
                    count++;
                }
        }
    if(count != 0)
        {
            printf("%d is not prime", user);
        }
    else
        {
            printf("%d is a prime", user);
        }

    return 0;
}