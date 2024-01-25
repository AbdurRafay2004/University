#include <stdio.h>
#include <math.h>
int main()
{
    int n, count =0,powdigit =10,j = 1;
    printf("Give me some numbers: ");
    scanf("%d", &n);

    int i= n;
    while(i!=0)
        {
            i = i/10;
            count++;
        }
    count--;
    
    while(j<count)//power, because the using pow was giving me problem with a few numbers like (32678)
        {
            powdigit *=10;
            j++;
        }

    while(n!=0)
        {
            printf("%d", n/powdigit);
            n = n%powdigit;  
            powdigit = powdigit/10;
            if(n>0)
                printf(", ");//finishing touch
            
        }


}