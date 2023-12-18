//notes to kinds of notes
#include <stdio.h>
int main()
{
    double n;
    int mod;
    scanf("%lf", &n);//get floating number

    int notas = n;//convert notes to integer
    int moedas = (n-notas)*100;//converts coins to integer

    int rs100 = notas/100;
    mod = notas%100;
    int rs50 = mod/50;
    mod = mod%50;
    int rs20 = mod/20; 
    mod = mod%20;
    int rs10 = mod/10;
    mod = mod%10;
    int rs5 = mod/5;
    mod = mod%5;
    int rs2 = mod/2;

    mod = mod%2;
    int c1 = mod/1;

    int c0_50 = moedas/50;
    mod = moedas%50;
    int c0_25 = mod/25;
    mod = mod%25;
    int c0_10 = mod /10;
    mod = mod%10;
    int c0_05 = mod/5;
    mod = mod%5;
    int c0_01 = mod/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", rs100);
    printf("%d nota(s) de R$ 50.00\n", rs50);
    printf("%d nota(s) de R$ 20.00\n", rs20);
    printf("%d nota(s) de R$ 10.00\n", rs10);
    printf("%d nota(s) de R$ 5.00\n", rs5);
    printf("%d nota(s) de R$ 2.00\n", rs2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c0_50);
    printf("%d moeda(s) de R$ 0.25\n", c0_25);
    printf("%d moeda(s) de R$ 0.10\n", c0_10);
    printf("%d moeda(s) de R$ 0.05\n", c0_05);
    printf("%d moeda(s) de R$ 0.01\n", c0_01);

    return 0;
}