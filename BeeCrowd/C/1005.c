#include <stdio.h>
int main()
{
    //getting avg with weightened(?) subject
    double A,B;
    scanf("%lf %lf", &A, &B);
    double math = (A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %0.5lf\n", math);
    return 0;
}