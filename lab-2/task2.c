#include <stdio.h>
#include <math.h>


int main()
{
    double radius;



    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    double circumference = 2*M_PI*radius;

    double area = M_PI*(radius*radius);


    printf("Circumference is: %lf\n", circumference);
    printf("Area: %lf", area);

    return 0;

}