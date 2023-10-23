#include <stdio.h>

int main() {
    int n[5], i, j, sum = 0;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
        {
            scanf("%d", &n[i]);
            // sum += n[i];
            // printf("%d\n", sum);
        }
    printf("Output:\n");
    for (i = 0; i < 5; i++)
        {
            sum += n[i];
            printf("%d\n", sum);
        } 

    return 0;



}
