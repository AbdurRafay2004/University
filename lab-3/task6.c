#include <stdio.h>

int main() {
    int n, i, y = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n) 
    {
        // if(i%2==0)
        //     {
        //         y = y+(i*i);
        //     }
        // else
        //     {
        //         y = y-(i*i);
        //     }
        y += i * i * (i % 2 == 0 ? -1 : 1); //tried using ternary operator in place of if-else
        
        i++;
    }
    printf("The value of y is %d.\n", y);
    return 0;
}
