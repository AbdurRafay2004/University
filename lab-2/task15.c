#include <stdio.h>

int main()
{
    double CGPA;
    int credit;

    printf("Enter your CGPA: ");
    scanf("%lf", &CGPA);

    printf("Enter total credit: ");
    scanf("%d", &credit);

    if(credit>=30 && CGPA>=3.80 && CGPA<=4.00)
        {
            if(CGPA<=3.89 && CGPA>=3.80)
                {
                    printf("The student is eligible for a waiver of 25 percent");
                }
            else if(CGPA<=3.94 && CGPA >= 3.90)
                {
                    printf("The student is eligible for a waiver of 50 percent");
                }
            else if(CGPA== 3.99 || (CGPA<=3.99 && CGPA >= 3.95)) //I dont know why but 3.99 was giving 'not eligible'!!
                {
                    printf("The student is eligible for a waiver of 75 percent");
                }
            else if(CGPA==4) 
                {
                    printf("The student is eligible for a waiver of 100 percent");
                }
        }
    else
        printf("The student is not eligible for a waiver");

    return 0;

}