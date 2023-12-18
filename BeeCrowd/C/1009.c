#include <stdio.h>
int main()
{
    char name[50];
    double fixed_salary, sales, final_salary;

    scanf("%s %lf %lf", &name, &fixed_salary, &sales);

    final_salary = fixed_salary + (sales*0.15);

    printf("TOTAL = R$ %0.2lf\n", final_salary);

    return 0;
}