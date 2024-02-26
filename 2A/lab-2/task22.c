#include <stdio.h>

int main()
{
    int canvas, paint_tube;
    int canvas_price = 120, paint_tube_price = 75;
    printf("Enter the amount of canvas and paint tube you want to buy: ");
    scanf("%d %d", &canvas, &paint_tube);

    int total_amount = (canvas*canvas_price)+(paint_tube*paint_tube_price);
    printf("Previous total: %d\n", total_amount);

    if(total_amount>0)
        {
            if(total_amount<300)
                {
                    printf("No Discount!");
                }
            else if(total_amount<500)
                {
                    printf("New total after discount: %d", total_amount-10);
                }
            else if(total_amount<750)
                {
                    printf("New total after discount: %d", total_amount-20);
                }
            else if(total_amount<1000)
                {
                    printf("New total after discount: %d", total_amount-50);
                }
            else
                {
                    printf("New total after discount: %d", total_amount-150);
                }
            //this will not work in reverse order
        }
    else
        printf("Invalid input");

}