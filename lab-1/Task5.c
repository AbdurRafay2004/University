#include<stdio.h>
#include<math.h>// had to use it bcz of pow

int main()
{
    int M,N,X;//Is it variable? or string? remember to ask sir next class

    printf("Enter the value of M: ");
    scanf("%d",&M);
    printf("Enter the value of N: ");
    scanf("%d",&N);

    X = pow(M,N);//because of pow I had to use math.h header or else it was showing error in the terminal

    printf("%d^%d: %d", M,N,X);//same format as the output shown in the pdf

    return 0;
}

