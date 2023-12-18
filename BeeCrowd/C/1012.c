
#include <stdio.h>

int main()
{
 double a, b, c;

 scanf("%lf %lf %lf", &a, &b, &c);

 printf("TRIANGULO: %.3lf\n", (a * c) / 2); //half(1/2)*vumi*ucchota
 printf("CIRCULO: %.3lf\n", c * c * 3.14159);//pi*r^2
 printf("TRAPEZIO: %.3lf\n", ((a + b) / 2) * c);//(vumi+vumi/2)*ucchota
 printf("QUADRADO: %.3lf\n", b * b);//bahu*bahu
 printf("RETANGULO: %.3lf\n", a * b);//doirgho*prostho 

 return 0;
}
