//from age(in days) into age(years, months, days)
#include <stdio.h>
int main()
{
    int age,mod;
    scanf("%d", &age);

    int years = age/365;
    mod = age%365;
    int months = mod/30;
    mod = mod%30;
    int days = mod;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years, months, days);
    return 0;
}