#include <stdio.h>

int main()
{
    double fahrenheit;
    printf("Input temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celsius = (fahrenheit-32)*0.56;
    printf("%0.2lf degrees C\n", celsius);

    if(celsius<20)
        {
            printf("Winter");
        }
    else if(celsius>=20 && celsius<=25)
        printf("Autumn");
    else if(celsius>25 && celsius<30)
        printf("Spring");
    else
        printf("Summer");

}