#include<stdio.h>

int main()
{
    //input section
    int goods,destribution, max_load;
    printf("Total unit of goods: ");
    scanf("%d", &goods);

    //destributing the goods to the 4 corners of the boat
    destribution = goods/4;

    //maximum load the boat can take
    max_load = destribution*4;

    printf("Max load %d", max_load);

    return 0;
}