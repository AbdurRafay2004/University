#include <stdio.h>

int main() {
    int sum=0;
    int i=1;
    while(i<=600)
        {
            if(i%7==0 && i%9==0)
                {   
                    sum = sum + i; 
                }
            i++;
        }
    printf("Sum = %d ", sum);

    return 0;
}
