#include <stdio.h>

int main()
{
    int point;
    printf("Enter your marks: ");
    scanf("%d", &point);

    if(point>=0 && point<=100)
        {
            if(point>=90 && point<=100)
                {
                    printf("A");
                }
            else if(point>=80 && point<=89)
                {
                    printf("B");
                }
            else if(point>=70 && point<=79)
                {
                    printf("C");
                }
            else if(point>=60 && point<=69)
                {
                    printf("D");
                }
            else if(point>=50 && point<=59)
                {
                    printf("E");
                }
            else if(point<50)
                {
                    printf("F");
                }
        }
    else
        {
            printf("Invalid number");
        }
}