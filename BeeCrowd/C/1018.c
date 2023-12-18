#include <stdio.h>
int main()
{
    int taka, moduluo;
    scanf("%d", &taka);
    int rs100 = taka/100;
    moduluo = taka%100;
    int rs50 = moduluo/50;
    moduluo = moduluo%50;
    int rs20 = moduluo/20;
    moduluo = moduluo%20;
    int rs10 = moduluo/10;
    moduluo = moduluo%10;
    int rs5 = moduluo/5;
    moduluo = moduluo%5;
    int rs2 = moduluo/2;
    moduluo = moduluo%2;
    int rs1 = moduluo/1;
    printf("%d\n", taka);
    printf("%d nota(s) de R$ 100,00\n",rs100);
    printf("%d nota(s) de R$ 50,00\n", rs50);
    printf("%d nota(s) de R$ 20,00\n", rs20);
    printf("%d nota(s) de R$ 10,00\n", rs10);
    printf("%d nota(s) de R$ 5,00\n", rs5);
    printf("%d nota(s) de R$ 2,00\n", rs2);
    printf("%d nota(s) de R$ 1,00\n", rs1);
    return 0;
}